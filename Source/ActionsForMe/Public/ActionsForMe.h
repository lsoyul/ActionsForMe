// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EngineMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(ActionsForMe, Log, All);

#define AFMLOG_CALLINFO (FString(__FUNCTION__) + TEXT("(") + FString::FromInt(__LINE__) + TEXT(")"))
#define AFMLOG_S(Verbosity) UE_LOG(ActionsForMe, Verbosity, TEXT("%s"), *AFMLOG_CALLINFO)
#define AFMLOG(Verbosity, Format, ...) UE_LOG(ActionsForMe, Verbosity, TEXT("%s %s"), *AFMLOG_CALLINFO, *FString::Printf(Format, ##__VA_ARGS__))

#define AFMCHECK(Expr, ...) { if(!(Expr)) { AFMLOG(Error, TEXT("ASSERTION : %s"), TEXT("'"#Expr"'")); return __VA_ARGS__; }}