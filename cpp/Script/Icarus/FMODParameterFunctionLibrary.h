// /Script/Icarus.FMODParameterFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/Audio/FMODParameterFunctionLibrary.h

UCLASS()
class UFMODParameterFunctionLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable) static void SetComponentAnimSpeedParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentAnimStateParameter(UFMODAudioComponent* AudioComponent, EAnimStateFMODParam AnimStateValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentBuildingOpenParameter(UFMODAudioComponent* AudioComponent, EBuildingOpenFMODParam BuildingOpenValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentBuildingSnowParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentBuildingStabilityParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentBuildingUnzipParameter(UFMODAudioComponent* AudioComponent, EBuildingUnzipFMODParam BuildingUnzipValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentCaveContextParameter(UFMODAudioComponent* AudioComponent, ECaveContextFMODParam CaveContextValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentCaveListenerCorrelationParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentCreatureFoliageParameter(UFMODAudioComponent* AudioComponent, ECreatureFoliageFMODParam CreatureFoliageValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentCreatureFootstepTypeParameter(UFMODAudioComponent* AudioComponent, ECreatureFootstepTypeFMODParam CreatureFootstepTypeValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentCreatureVelocityParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentDamageTypeParameter(UFMODAudioComponent* AudioComponent, EDamageTypeFMODParam DamageTypeValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentDepOxitedBalloonsizeParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentDropshipDescentStateParameter(UFMODAudioComponent* AudioComponent, EDropshipDescentStateFMODParam DropshipDescentStateValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentDropshipOcclusionParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentEnvironmentBiomeInfluenceParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentEnvironmentLavaFlowParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentEnvironmentLightningTargetParameter(UFMODAudioComponent* AudioComponent, EEnvironmentLightningTargetFMODParam EnvironmentLightningTargetValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentFireStateParameter(UFMODAudioComponent* AudioComponent, EFireStateFMODParam FireStateValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentIntensityParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentItemCraftingCountParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentItemCraftingTypeParameter(UFMODAudioComponent* AudioComponent, EItemCraftingTypeFMODParam ItemCraftingTypeValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentItemDamageParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentItemFlameMovementParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentItemHealthParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentItemHitSuccessParameter(UFMODAudioComponent* AudioComponent, int32 IntegerValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentItemWeatherExposureParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentMultiPointCountParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentMultiPointSpreadParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentMusicFadeParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentMusicNarrativemusictestParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentMusicTrackStateParameter(UFMODAudioComponent* AudioComponent, int32 IntegerValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentOcclusionParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentOcclusionShelterContextParameter(UFMODAudioComponent* AudioComponent, EOcclusionShelterContextFMODParam OcclusionShelterContextValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentParticleCountParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerArmourTypeParameter(UFMODAudioComponent* AudioComponent, EPlayerArmourTypeFMODParam PlayerArmourTypeValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerBoneVelocityParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerClothCollisionParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerDamageParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerFloorSlopeParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerFoliageParameter(UFMODAudioComponent* AudioComponent, EPlayerFoliageFMODParam PlayerFoliageValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerGroundStateParameter(UFMODAudioComponent* AudioComponent, EPlayerGroundStateFMODParam PlayerGroundStateValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerModifierEffectivenessParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerModifierStackSizeParameter(UFMODAudioComponent* AudioComponent, int32 IntegerValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerStanceParameter(UFMODAudioComponent* AudioComponent, EPlayerStanceFMODParam PlayerStanceValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerTypeParameter(UFMODAudioComponent* AudioComponent, EPlayerTypeFMODParam PlayerTypeValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerVelocityParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentPlayerWaterDepthParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentRadiationLevelParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentStationCollisionParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentSurfaceParameter(UFMODAudioComponent* AudioComponent, ESurfaceFMODParam SurfaceValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentSurveyLaserParameter(UFMODAudioComponent* AudioComponent, ESurveyLaserFMODParam SurveyLaserValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentSurveyTransmitParameter(UFMODAudioComponent* AudioComponent, ESurveyTransmitFMODParam SurveyTransmitValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentTowerMinigameParameter(UFMODAudioComponent* AudioComponent, ETowerMinigameFMODParam TowerMinigameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentTreeBranchBreaksParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentTreeDetachContextParameter(UFMODAudioComponent* AudioComponent, ETreeDetachContextFMODParam TreeDetachContextValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentTreeFallAmountParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentTreeFallSpeedParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentTreeMassParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentTreeSplitPiecesParameter(UFMODAudioComponent* AudioComponent, int32 IntegerValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentTreeVelocityParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentUiCharacterLevelParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentUiMapZoomRocParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentVehicleRevParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentWaterEnvelopmentParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentWaterImmersionParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentWaterIslandDistanceParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentWaterPlayerZPositionParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentWaterProximityInfluenceParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentWaterStoredParameter(UFMODAudioComponent* AudioComponent, EWaterStoredFMODParam WaterStoredValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentWaterWaterfallHeightParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentWaterWaterfallWidthParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentWeaponAimingParameter(UFMODAudioComponent* AudioComponent, EWeaponAimingFMODParam WeaponAimingValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentWeaponAmmoParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentWeaponBallisticLaunchVelocityParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentWeaponChargeParameter(UFMODAudioComponent* AudioComponent, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetComponentWeaponChargingParameter(UFMODAudioComponent* AudioComponent, EWeaponChargingFMODParam WeaponChargingValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentWeaponReloadingParameter(UFMODAudioComponent* AudioComponent, EWeaponReloadingFMODParam WeaponReloadingValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetComponentWeaponSilencedParameter(UFMODAudioComponent* AudioComponent, EWeaponSilencedFMODParam WeaponSilencedValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventAnimSpeedParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventAnimStateParameter(FFMODEventInstance EventInstance, EAnimStateFMODParam AnimStateValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventBuildingOpenParameter(FFMODEventInstance EventInstance, EBuildingOpenFMODParam BuildingOpenValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventBuildingSnowParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventBuildingStabilityParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventBuildingUnzipParameter(FFMODEventInstance EventInstance, EBuildingUnzipFMODParam BuildingUnzipValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventCaveContextParameter(FFMODEventInstance EventInstance, ECaveContextFMODParam CaveContextValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventCaveListenerCorrelationParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventCreatureFoliageParameter(FFMODEventInstance EventInstance, ECreatureFoliageFMODParam CreatureFoliageValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventCreatureFootstepTypeParameter(FFMODEventInstance EventInstance, ECreatureFootstepTypeFMODParam CreatureFootstepTypeValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventCreatureVelocityParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventDamageTypeParameter(FFMODEventInstance EventInstance, EDamageTypeFMODParam DamageTypeValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventDepOxitedBalloonsizeParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventDropshipDescentStateParameter(FFMODEventInstance EventInstance, EDropshipDescentStateFMODParam DropshipDescentStateValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventDropshipOcclusionParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventEnvironmentBiomeInfluenceParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventEnvironmentLavaFlowParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventEnvironmentLightningTargetParameter(FFMODEventInstance EventInstance, EEnvironmentLightningTargetFMODParam EnvironmentLightningTargetValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventFireStateParameter(FFMODEventInstance EventInstance, EFireStateFMODParam FireStateValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventIntensityParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventItemCraftingCountParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventItemCraftingTypeParameter(FFMODEventInstance EventInstance, EItemCraftingTypeFMODParam ItemCraftingTypeValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventItemDamageParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventItemFlameMovementParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventItemHealthParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventItemHitSuccessParameter(FFMODEventInstance EventInstance, int32 IntegerValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventItemWeatherExposureParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventMultiPointCountParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventMultiPointSpreadParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventMusicFadeParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventMusicNarrativemusictestParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventMusicTrackStateParameter(FFMODEventInstance EventInstance, int32 IntegerValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventOcclusionParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventOcclusionShelterContextParameter(FFMODEventInstance EventInstance, EOcclusionShelterContextFMODParam OcclusionShelterContextValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventParticleCountParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventPlayerArmourTypeParameter(FFMODEventInstance EventInstance, EPlayerArmourTypeFMODParam PlayerArmourTypeValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventPlayerBoneVelocityParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventPlayerClothCollisionParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventPlayerDamageParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventPlayerFloorSlopeParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventPlayerFoliageParameter(FFMODEventInstance EventInstance, EPlayerFoliageFMODParam PlayerFoliageValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventPlayerGroundStateParameter(FFMODEventInstance EventInstance, EPlayerGroundStateFMODParam PlayerGroundStateValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventPlayerModifierEffectivenessParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventPlayerModifierStackSizeParameter(FFMODEventInstance EventInstance, int32 IntegerValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventPlayerStanceParameter(FFMODEventInstance EventInstance, EPlayerStanceFMODParam PlayerStanceValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventPlayerTypeParameter(FFMODEventInstance EventInstance, EPlayerTypeFMODParam PlayerTypeValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventPlayerVelocityParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventPlayerWaterDepthParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventRadiationLevelParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventStationCollisionParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventSurfaceParameter(FFMODEventInstance EventInstance, ESurfaceFMODParam SurfaceValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventSurveyLaserParameter(FFMODEventInstance EventInstance, ESurveyLaserFMODParam SurveyLaserValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventSurveyTransmitParameter(FFMODEventInstance EventInstance, ESurveyTransmitFMODParam SurveyTransmitValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventTowerMinigameParameter(FFMODEventInstance EventInstance, ETowerMinigameFMODParam TowerMinigameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventTreeBranchBreaksParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventTreeDetachContextParameter(FFMODEventInstance EventInstance, ETreeDetachContextFMODParam TreeDetachContextValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventTreeFallAmountParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventTreeFallSpeedParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventTreeMassParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventTreeSplitPiecesParameter(FFMODEventInstance EventInstance, int32 IntegerValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventTreeVelocityParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventUiCharacterLevelParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventUiMapZoomRocParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventVehicleRevParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventWaterEnvelopmentParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventWaterImmersionParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventWaterIslandDistanceParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventWaterPlayerZPositionParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventWaterProximityInfluenceParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventWaterStoredParameter(FFMODEventInstance EventInstance, EWaterStoredFMODParam WaterStoredValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventWaterWaterfallHeightParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventWaterWaterfallWidthParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventWeaponAimingParameter(FFMODEventInstance EventInstance, EWeaponAimingFMODParam WeaponAimingValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventWeaponAmmoParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventWeaponBallisticLaunchVelocityParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventWeaponChargeParameter(FFMODEventInstance EventInstance, float FloatValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable) static void SetEventWeaponChargingParameter(FFMODEventInstance EventInstance, EWeaponChargingFMODParam WeaponChargingValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventWeaponReloadingParameter(FFMODEventInstance EventInstance, EWeaponReloadingFMODParam WeaponReloadingValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetEventWeaponSilencedParameter(FFMODEventInstance EventInstance, EWeaponSilencedFMODParam WeaponSilencedValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable) static void SetGlobalDropStateParameter(EGlobalDropStateFMODParam GlobalDropStateValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentAcidRainParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentBiomeParameter(EGlobalEnvironmentBiomeFMODParam GlobalEnvironmentBiomeValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentCaveParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentCrevasseDepthParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentDebrisParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentFireIntensityParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentHailParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentMegatreeClimbUpParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentMegatreeDistToEdgeParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentOvercastParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentRadiationLightningParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentRadiationSpecklesParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentRainParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentSandstormParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentSnowParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentSnowstormParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentStormParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentTerrainZoneCanyonMedParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentTerrainZoneCanyonNarrowParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentTerrainZoneCanyonWideParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentTerrainZoneParameter(EGlobalEnvironmentTerrainZoneFMODParam GlobalEnvironmentTerrainZoneValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentThunderParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentTimeParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentVolcanicAshParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentVolcanicEmbersParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentWindExposureParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalEnvironmentWindParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalFoliageBushCountParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalFoliageTreeCloseCountParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalFoliageTreeCountParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalFoliageTreeCoverParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalFoliageTreeDensityParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalHabMasterParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalLoadingScreenStateParameter(EGlobalLoadingScreenStateFMODParam GlobalLoadingScreenStateValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetGlobalMusicIcarusThemePlayCountParameter(int32 IntegerValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerAsleepParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerAverageReflectionParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerCharacterVoiceParameter(EGlobalPlayerCharacterVoiceFMODParam GlobalPlayerCharacterVoiceValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerClosestReflectionParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerDeadParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerHealthParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerKillcamParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerReflectionHighFreqParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerReflectionLowFreqParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerShelterParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerShelterSurfaceHighFreqParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerShelterSurfaceLowFreqParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerShelterSurfaceReflectionParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerStaminaParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerUnderwaterParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalPlayerZPositionParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalQuadDistBLParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalQuadDistBRParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalQuadDistFLParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalQuadDistFRParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalQuadStrengthAverageParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalQuadStrengthBLParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalQuadStrengthBRParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalQuadStrengthFLParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalQuadStrengthFRParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalQuadStrengthLeftParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalQuadStrengthRightParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalVolumeAmbientParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalVolumeCharacterVoiceParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalVolumeDialogueParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalVolumeMasterParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalVolumeMusicParameter(float FloatValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) static void SetGlobalVolumeSoundeffectsParameter(float FloatValue);  // parameters 0x4
};
