// Fill out your copyright notice in the Description page of Project Settings.


#include "TextFileManager.h"
#include "Misc/FileHelper.h"
#include "HAL/PlatformFilemanager.h"

FString UTextFileManager::LoadFileToString(FString Filename)
{
	FString result;
	const FString myFile = Filename;
	FFileHelper::LoadFileToString(result, *myFile);

	return result;
}


