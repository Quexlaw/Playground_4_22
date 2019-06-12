// articy Software GmbH & Co. KG
/** This code file was generated by ArticyImporter. Changes to this file will get lost once the code is regenerated. */

#pragma once

#include "CoreUObject.h"
#include "PluginshowcaseInterfaces.generated.h"


/** UNINTERFACE generated from Articy Basic Character Properties Feature */
UINTERFACE(MinimalAPI, BlueprintType, Category="Pluginshowcase Feature Interfaces", meta=(CannotImplementInterfaceInBlueprint))
class UPluginshowcaseObjectWithDefaultBasicCharacterFeatureFeature : public UInterface { GENERATED_BODY() };
class IPluginshowcaseObjectWithDefaultBasicCharacterFeatureFeature
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
	virtual class UPluginshowcaseDefaultBasicCharacterFeatureFeature* GetFeatureDefaultBasicCharacterFeature() const
	{
		return nullptr;
	}
};

/** UNINTERFACE generated from Articy Extended Character Properties Feature */
UINTERFACE(MinimalAPI, BlueprintType, Category="Pluginshowcase Feature Interfaces", meta=(CannotImplementInterfaceInBlueprint))
class UPluginshowcaseObjectWithDefaultExtendedCharacterFeatureFeature : public UInterface { GENERATED_BODY() };
class IPluginshowcaseObjectWithDefaultExtendedCharacterFeatureFeature
{
	GENERATED_BODY()
	
public:
	
	UFUNCTION(BlueprintCallable)
	virtual class UPluginshowcaseDefaultExtendedCharacterFeatureFeature* GetFeatureDefaultExtendedCharacterFeature() const
	{
		return nullptr;
	}
};