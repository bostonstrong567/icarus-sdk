// /Game/BP/Player/BP_IcarusPlayerCharacterSurvival.BP_IcarusPlayerCharacterSurvival_C
// Derives from: AIcarusPlayerCharacterSurvival > AIcarusPlayerCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0x1408, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_IcarusPlayerCharacterSurvival_C : public AIcarusPlayerCharacterSurvival, public IICameraInterface_C, public IHitReactionInterface_C, public IBP_CaveComponentInterface_C, public IBP_PlayerAudio_AnimNotify_Interface_C, public IInventoryModerator
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0D80, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_Underwater_Lava;  // 0x0D88, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_Underwater_Swamp;  // 0x0D90, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_PlayerLoadoutComponent_C* BP_PlayerLoadoutComponent;  // 0x0D98, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* PP_Container;  // 0x0DA0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_Underwater_Day;  // 0x0DA8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_Underwater_Night;  // 0x0DB0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_Lensflare;  // 0x0DB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_EnterWater;  // 0x0DC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_OutOfWater;  // 0x0DC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_Water;  // 0x0DD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* HighlightablePostProcess;  // 0x0DD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* ActionablePostProcess;  // 0x0DE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_Heat;  // 0x0DE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_Thermal;  // 0x0DF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_DamageIndicator;  // 0x0DF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_Underwater;  // 0x0E00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPostProcessComponent* PostProcess_Cold;  // 0x0E08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UShelteredModifierComponent* ShelteredModifier;  // 0x0E10, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* ClothAffector;  // 0x0E18, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionComponent_Player_C* BP_UIProjectionComponent_Player;  // 0x0E20, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_Flammable_Player_C* BP_Flammable_Player;  // 0x0E28, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UAudioOcclusionComponent* AudioOcclusion;  // 0x0E30, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ItemManipulationComponent_C* BP_ItemManipulationComponent;  // 0x0E38, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* WeightCollider;  // 0x0E40, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_PlayerMusicComponent_C* BP_PlayerMusicComponent;  // 0x0E48, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* UnderwaterFX;  // 0x0E50, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* UnderwaterVolume;  // 0x0E58, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_PlayerMovementAudioComponent_C* BP_PlayerMovementAudioComponent;  // 0x0E60, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UExperienceComponent* Experience;  // 0x0E68, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* NameMarkerLocation;  // 0x0E70, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_PlayerBuildingPlacement_C* BP_PlayerBuildingPlacement;  // 0x0E78, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* BP_RVT_FoliagePersistant;  // 0x0E80, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_PlayerEnvironmentalAudioComponent_C* BP_PlayerEnvironmentalAudioComponent;  // 0x0E88, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_ShelteredComponent_C* BP_ShelteredComponent;  // 0x0E90, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_GroundSurfaceChecker_C* BP_GroundSurfaceChecker;  // 0x0E98, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* TPMeshFull;  // 0x0EA0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_PlayerEffectsComponent_C* BP_PlayerEffectsComponent;  // 0x0EA8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* FPSpotlightAttach;  // 0x0EB0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* TPSpotlightAttach;  // 0x0EB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* TPMeshSimple;  // 0x0EC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_SwimmingComponent_C* BP_SwimmingComponent;  // 0x0EC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DamageDirectionPivot;  // 0x0ED0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* FPCamera;  // 0x0ED8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* FPMesh;  // 0x0EE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* BowLocator;  // 0x0EE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_PlayerCameraComponent_C* BP_PlayerCameraComponent;  // 0x0EF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_Weight_C* BP_Weight;  // 0x0EF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UProcessingComponent* Processing;  // 0x0F00, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* PlayerNameWidget;  // 0x0F08, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow1;  // 0x0F10, size 0x8
    UPROPERTY() float PP_ExitWater_Line_205F5B6F4CBC44F0C618AB9DF54C52A8;  // 0x0F18, size 0x4
    UPROPERTY() float PP_ExitWater_Time_205F5B6F4CBC44F0C618AB9DF54C52A8;  // 0x0F1C, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> PP_ExitWater__Direction_205F5B6F4CBC44F0C618AB9DF54C52A8;  // 0x0F20, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* PP_ExitWater;  // 0x0F28, size 0x8
    UPROPERTY() float PP_EnterWater_Time_BC5B894041D4A44E3CB9059F469AE474;  // 0x0F30, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> PP_EnterWater__Direction_BC5B894041D4A44E3CB9059F469AE474;  // 0x0F34, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* PP_EnterWater;  // 0x0F38, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool JumpRequested;  // 0x0F40, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TurnRate;  // 0x0F44, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LookUpRate;  // 0x0F48, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsItemActionPlaying;  // 0x0F4C, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AIcarusItem* FocusedItem;  // 0x0F50, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USkeletalMeshComponent* ActiveMesh;  // 0x0F58, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ABP_Grid_Base_C* RemoteFocusedGrid;  // 0x0F60, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ABP_ObjectSlot_C* CurrentSlotConnection;  // 0x0F68, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsLocalCrafting;  // 0x0F70, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FProcessingUpdated ProcessingUpdated;  // 0x0F78, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ClientHasAuthority;  // 0x0F88, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultFPCameraFOV;  // 0x0F8C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AIcarusItem* UtilityItem;  // 0x0F90, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UUMG_DamageIndicator_C*> DamageIndicatorWidgets;  // 0x0F98, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform ADSOffset;  // 0x0FB0, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PPDamageMat;  // 0x0FE0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PPDamageTakenIntensity;  // 0x0FE8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LastDamageCauser;  // 0x0FF0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastDamageLocation;  // 0x0FF8, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* PPDamageAppliedMat;  // 0x1008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* HeartbeatCurve;  // 0x1010, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 LastStamina;  // 0x1018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PPDamageDealtIntensity;  // 0x101C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 CurrentWeight;  // 0x1020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FAttachedSeatChanged AttachedSeatChanged;  // 0x1028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CurrentStamina;  // 0x1038, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 OverburnedUID;  // 0x103C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float FootstepCooldownEndTime;  // 0x1040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAfflictionTrigger Afflication_Threshold_Overheating;  // 0x1044, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAfflictionTrigger Afflication_Threshold_HeatOverload;  // 0x1074, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAfflictionTrigger Afflication_Threshold_Chilled;  // 0x10A4, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAfflictionTrigger Afflication_Threshold_Freezing;  // 0x10D4, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FootstepMaxPlayDistanceSquared;  // 0x1104, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FAbortInteraction AbortInteraction;  // 0x1108, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* TPWaveEmote;  // 0x1118, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UAnimMontage* FPWaveEmote;  // 0x1120, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* CachedInteractionRaycastHit;  // 0x1128, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FUtilityItemChanged UtilityItemChanged;  // 0x1130, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FUnderwaterChanged UnderwaterChanged;  // 0x1140, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* HelmetMatRef;  // 0x1150, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle SwimmingTimer;  // 0x1158, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Swimming_UID;  // 0x1160, size 0x4, named "Swimming UID"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool BlockPostprocess;  // 0x1164, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFireModeChanged FireModeChanged;  // 0x1168, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FFocusedItemUpdated FocusedItemUpdated;  // 0x1178, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool OutOfWaterPPEnabled;  // 0x1188, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutOfWaterPPLength;  // 0x118C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OutOfWaterPPFadeOutLength;  // 0x1190, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* WaterPPMaterial;  // 0x1198, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsTravellingInDropship;  // 0x11A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FTravellingInDropshipChanged TravellingInDropshipChanged;  // 0x11A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ToggleCrouch;  // 0x11B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasValidFocusMontage;  // 0x11B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPoseSnapshot DeathPose;  // 0x11C0, size 0x38
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* WaterEnterPPMaterial;  // 0x11F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CameFromUnderwater;  // 0x1200, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UUMG_GOAPWorldStats_C* GOAPWorldStatsRef;  // 0x1208, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GOAPWorldStatsActive;  // 0x1210, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle AltInteractionTimer;  // 0x1218, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastDamageYaw;  // 0x1220, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastDamageTime;  // 0x1224, size 0x4
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnCosmeticDamageEffects OnCosmeticDamageEffects;  // 0x1228, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusCharacter* Host;  // 0x1238, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsUnderwater;  // 0x1240, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InteractPressed;  // 0x1241, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CameraIsUnderwater;  // 0x1242, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsDead;  // 0x1243, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FKeybindingsRowHandle, FTimerHandle> KeybindHoldTimerHandles;  // 0x1248, size 0x50
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBuildingRepairWarningChanged BuildingRepairWarningChanged;  // 0x1298, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowRepairWarning;  // 0x12A8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DefaultVignetteIntensity;  // 0x12AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* CameraShakeCurve;  // 0x12B0, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool ServerIsCurrentlyInCave;  // 0x12B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ToggleSprint;  // 0x12B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastMovementInputTime;  // 0x12BC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MovementInputEndDelay;  // 0x12C0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MovementInputEndThreshold;  // 0x12C4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* CurrentCaveActor;  // 0x12C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool GracePeriodActive;  // 0x12D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UtilitySlotIndex;  // 0x12D4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool BackpackMeshHidden;  // 0x12D8, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AIcarusItem* LightItem;  // 0x12E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FVisionItemChanged VisionItemChanged;  // 0x12E8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnFootstep OnFootstep;  // 0x12F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsHoldingCrouch;  // 0x1308, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle PlayerOutOfWorldTimer;  // 0x1310, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector LastGroundedWorldLocation;  // 0x1318, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TimeStartedFalling;  // 0x1324, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LastGroundedLocationTeleportTime;  // 0x1328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InteractHoldTime;  // 0x132C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float AltInteractHoldTime;  // 0x1330, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float FootstepJumpLandMaxWaterDepth;  // 0x1334, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) AIcarusItem* SecondaryFocusedItem;  // 0x1338, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 OffHandFocusedSlot;  // 0x1340, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool ShieldOnBack;  // 0x1344, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MiamsaModifierID;  // 0x1348, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Miamsa_Effectiveness;  // 0x134C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FocusedSlot;  // 0x1350, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusActor* BedActor;  // 0x1358, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 OffhandStatUID;  // 0x1360, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowUpgradeWarning;  // 0x1364, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBuildingUpgradeWarningChanged BuildingUpgradeWarningChanged;  // 0x1368, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ShowShearingWarning;  // 0x1378, size 0x1
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FShearingWarningChanged ShearingWarningChanged;  // 0x1380, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<AIcarusItem*, FVector> LightSlotItemDefaultOffset;  // 0x1390, size 0x50
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnAltInteract OnAltInteract;  // 0x13E0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NonFlyingBrakingFriction;  // 0x13F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float NonFlyingMaxAcceleration;  // 0x13F4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredHeatPPBlend;  // 0x13F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DesiredColdPPBlend;  // 0x13FC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, SaveGame, BlueprintReadWrite) AIcarusMountCharacter* FocusedTame;  // 0x1400, size 0x8

    UFUNCTION(BlueprintCallable) void AbortInteraction__DelegateSignature();
    UFUNCTION(BlueprintCallable) void AttachedSeatChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable) void AutoEquipShield();
    UFUNCTION(BlueprintCallable) void Backpack_OnDroppingOverflowItem(const FItemData& Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void BuildingRepairWarningChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable) void BuildingUpgradeWarningChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Can_Equip_with_Off_Hand(const FItemData& ItemData, bool& IsLHWep);  // parameters 0x1F1, named "Can Equip with Off Hand"
    UFUNCTION(BlueprintCallable) void CheckEndedMovementInputs();
    UFUNCTION(BlueprintCallable) void CheckForLandscape(bool& Found);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CheckListenServerDistance();
    UFUNCTION(BlueprintCallable) void CheckPlayerFallingOutOfWorld();
    UFUNCTION(BlueprintCallable) void CheckPlayerOutOfWorld();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ClientSetCharacterVisibility(bool bIsVisible);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Client, Reliable) void Client_SetClientAuthority(bool HasAuthority);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool ConsumeFocusedItem(int32 Amount);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void DebugCameraShake(TSubclassOf<UMatineeCameraShake> ShakeClass);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void DebugConnections();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Debug_DrawArmourComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool Debug_GetGOAPWorldStatsActive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Debug_SetGOAPWorldStatsActive(bool bActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable) void DeleteBuilding();
    UFUNCTION(BlueprintCallable) void DestroySecondaryItem();
    UFUNCTION(BlueprintCallable) void DrawArmourComponentDebug();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool DropItem(const FItemData& InventoryItem);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void EndMontage(UAnimMontage* Montage, UAnimMontage* FP_Montage, float BleedOutTime);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void EquipmentItemBroke(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_IcarusPlayerCharacterSurvival(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FOVApplied(float Value);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FireModeChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable) void Fix_Utility_Slot();  // named "Fix Utility Slot"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void FocusAndUseItemFromMenu(UInventory* Inventory, int32 Slot, FUsesEnum Use);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void FocusedItemCheck(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void FocusedItemUpdated__DelegateSignature(AIcarusItem* FocusedItem);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ForceSyncFocusedItem();
    UFUNCTION(BlueprintCallable) void Get_Underwater_PP_Settings_Component(AActor* WaterActor, UPostProcessComponent*& Component);  // parameters 0x10, named "Get Underwater PP Settings Component"
    UFUNCTION(BlueprintCallable) void GetArmourStructWithOverride(FArmourRowHandle InArmourRow, FArmourData& Armour, bool& Success);  // parameters 0x319
    UFUNCTION(BlueprintCallable, BlueprintPure) ABP_IcarusPlayerControllerSurvival_C* GetBPIcarusPlayerController();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetCurrentInventoryWeight() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) EProspectLocation GetCurrentProspectLocation() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusItem* GetCurrentSecondarySlotActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusItem* GetCurrentUtilityActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusItem* GetCurrentUtilitySlotActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetDamageAudioAsset(AActor* DamageCauser, EIcarusDamageType DamageType, UFMODEvent*& FMODEvent);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void GetDamageVocalisation(AActor* DamageCauser, EIcarusDamageType DamageType, int32 DamageAmount, FVocalisationsRowHandle& Vocalisation);  // parameters 0x28
    UFUNCTION(BlueprintCallable) FTransform GetDropTransform(FItemData ItemData);  // parameters 0x220
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetFPCameraOrientation(FVector& OutPosition, FVector& OutForward);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) USkeletalMeshComponent* GetFirstPersonBodyMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UCameraComponent* GetFirstPersonCamera() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) USkeletalMeshComponent* GetFirstPersonMesh() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusItem* GetFocusedItem() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusItem* GetFocusedItemActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetFootstepAudioAsset(TEnumAsByte<EPhysicalSurface> Surface, TEnumAsByte<EFootstepType> Footstep_Type, float WaterDepth, TSoftObjectPtr<UFMODEvent>& Event_Asset_Pointer);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) void GetHoldTimer(FKeybindingsRowHandle Keybind, FTimerHandle& TimerHandle, bool& bValid) const;  // parameters 0x21
    UFUNCTION(BlueprintCallable) void GetInventoryById(int32 InventoryId, UInventory*& Inventory);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetIsInCave() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FItemData GetItem(int32 InventoryId, int32 InventorySlot);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) UItemManipulationComponent* GetItemManipulationComponent() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) AIcarusItem* GetLightSlotItemActor() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<FItemData> GetLoadout();  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetNameMarkerWorldLocation() const;  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetOffHandFocusedSlot(int32& OffHandFocusedSlot);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) int32 GetSecondaryFocusedItemSlot() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetTargetedTameNPC(AIcarusMountCharacter*& IcarusMountCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool GetThermalVisionActive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) USkeletalMeshComponent* GetThirdPersonMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FItemData GetUtilityItemData(EDataValidity& Validity);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) USkeletalMeshComponent* GetVisibleCharacterMesh();  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Grant_Loadout();  // named "Grant Loadout"
    UFUNCTION(BlueprintCallable) void Grant_MetaItems();  // named "Grant MetaItems"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool HasCraftingRequirements(FTalentsRowHandle Talent);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) void HasItemInLightSlot(bool& HasItemInLightSlot);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void HealthUpdated(UActorState* ActorState, float NewHealth);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void InitPostProcessing();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool InitialisationComplete();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void InitialiseInventories();
    UFUNCTION() void InpActEvt_AltFire_K2Node_InputActionEvent_18(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_AltFire_K2Node_InputActionEvent_19(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_AltInteract_K2Node_InputActionEvent_8(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_AltInteract_K2Node_InputActionEvent_9(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_ChangeFireMode_K2Node_InputActionEvent_12(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Crouch_K2Node_InputActionEvent_10(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Crouch_K2Node_InputActionEvent_11(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_CycleFocusedTameCombatBehavior_K2Node_InputActionEvent_4(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_CycleFocusedTameMovementBehavior_K2Node_InputActionEvent_3(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_DestroyBuildingPiece_K2Node_InputActionEvent_31(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_DisableGridFocus_K2Node_InputActionEvent_25(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_DropItem_K2Node_InputActionEvent_24(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Emote_K2Node_InputActionEvent_7(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Escape_K2Node_InputActionEvent_13(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Fire_K2Node_InputActionEvent_22(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Fire_K2Node_InputActionEvent_23(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_FocusedTameStayFollow_K2Node_InputActionEvent_0(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Interact_K2Node_InputActionEvent_16(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Interact_K2Node_InputActionEvent_17(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_LowerGridOffset_K2Node_InputActionEvent_26(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_LowerGridOffset_K2Node_InputActionEvent_27(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_NearbyTamesFollow_K2Node_InputActionEvent_1(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_NearbyTamesStay_K2Node_InputActionEvent_2(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_RaiseGridOffset_K2Node_InputActionEvent_28(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_RaiseGridOffset_K2Node_InputActionEvent_29(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Reload_K2Node_InputActionEvent_14(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Reload_K2Node_InputActionEvent_15(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Sprint_K2Node_InputActionEvent_20(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_Sprint_K2Node_InputActionEvent_21(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_5(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_ToggleSuitLight_K2Node_InputActionEvent_6(FKey Key);  // parameters 0x18
    UFUNCTION() void InpActEvt_UnfocusGrid_K2Node_InputActionEvent_30(FKey Key);  // parameters 0x18
    UFUNCTION() void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_0(float AxisValue);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InteractFoliageCheck();
    UFUNCTION(BlueprintCallable) void InteractHeld();
    UFUNCTION(BlueprintCallable) void InteractionAltHeld();
    UFUNCTION(BlueprintCallable) void Inventory_BeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintPure) void Is_Night_Time(bool& NightTime);  // parameters 0x1, named "Is Night Time"
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsClothSimEnabled();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IsPlayerCovered(bool& Covered);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool IsSlotValidForItem(UInventoryComponent* Inventory, FInventoryIDEnum InventoryID, FItemData Item, int32 SlotIndex) const;  // parameters 0x20D
    UFUNCTION(BlueprintImplementableEvent) void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_OnFocusedItemBroken();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_OnPlayersSlept();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_PlayItemDroppedSound(FItemAudioDataRowHandle ItemAudio, FVector DropLocation);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void Miasma_Check();  // named "Miasma Check"
    UFUNCTION(BlueprintCallable) void ModifyColdPostprocess(float BlendWeight);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ModifyHeatPostprocess(float BlendWeight);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast) void Mount_Whistle_Follow();  // named "Mount Whistle Follow"
    UFUNCTION(BlueprintCallable, NetMulticast) void Mount_Whistle_Generic();  // named "Mount Whistle Generic"
    UFUNCTION(BlueprintCallable) void MoveCharacterToLocation(FVector Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_JumpRequested();
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multicast_PlayWaveAnim();
    UFUNCTION(BlueprintImplementableEvent) void NotifyAddedMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);  // parameters 0x11
    UFUNCTION(BlueprintImplementableEvent) void OnActorHiddenStateUpdated(bool bIsHidden);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnAliveStateChanged(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnAltInteract__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnArmourUpdated();
    UFUNCTION(BlueprintImplementableEvent) void OnAttachedToSeatChanged(ASeatBase* PreviousSeat);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnBlendOut_73A9C6B443141D46AED12983C3AE154D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnBlendOut_A821C3C945D48F8C05AB66B9866C4D58(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_73A9C6B443141D46AED12983C3AE154D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnCompleted_A821C3C945D48F8C05AB66B9866C4D58(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnConnectedPlayerInitialised();
    UFUNCTION(BlueprintImplementableEvent) void OnConsumableExpired(FItemsStaticRowHandle ItemData);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnCosmeticDamageEffects__DelegateSignature();
    UFUNCTION(BlueprintCallable) void OnDamageEffects(UActorState* ActorStateIn, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnDropshipExit(AIcarusPlayerCharacter* Player, AIcarusRocket* DropShip);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnFallDamageApplied(float DamageApplied, float FallSpeed, float FallStrength);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool OnFocusItem(const FItemData& InventoryItem);  // parameters 0x1F1
    UFUNCTION(BlueprintCallable) void OnFootstepAnimNotify(TEnumAsByte<EFootstepType> FootstepType, TEnumAsByte<EPlayerAudioStance> PlayerStance);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OnFootstep__DelegateSignature(TEnumAsByte<EFootstepType> FootstepType, TEnumAsByte<EPlayerAudioStance> PlayerStance);  // parameters 0x2
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnFrozenMovementChanged();
    UFUNCTION(BlueprintCallable) void OnHitSuccessful(AActor* HitActor, AActor* DamageCauser, EStealthAttackType StealthAttack, bool KillCam);  // parameters 0x12
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool OnInteractableLineTraceHit(const FHitResult& HitResult);  // parameters 0x89
    UFUNCTION(BlueprintCallable) void OnInterrupted_73A9C6B443141D46AED12983C3AE154D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnInterrupted_A821C3C945D48F8C05AB66B9866C4D58(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void OnItemUseFailed(FItemsStaticRowHandle ItemData, FUsesRowHandle Use);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void OnItemUsed(FItemsStaticRowHandle ItemData, FUsesRowHandle Use);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void OnJumpFailed();
    UFUNCTION(BlueprintImplementableEvent) void OnJumped();
    UFUNCTION(BlueprintImplementableEvent) void OnLanded(const FHitResult& Hit);  // parameters 0x88
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void OnModifiersUpdated(UModifierStateComponent* ModifiedComponent, bool Removed);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnMovementInputsEnded();
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_73A9C6B443141D46AED12983C3AE154D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyBegin_A821C3C945D48F8C05AB66B9866C4D58(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_73A9C6B443141D46AED12983C3AE154D(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnNotifyEnd_A821C3C945D48F8C05AB66B9866C4D58(FName NotifyName, UAnimNotify* Notify);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnProcessingCompleted(FProcessingItem Item);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void OnProcessingStopped(EProcessorStoppedReason Reason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void OnRep_BackpackMeshHidden();
    UFUNCTION(BlueprintCallable) void OnRep_CharacterCosmetics();
    UFUNCTION(BlueprintCallable) void OnRep_CurrentFocusedGrid();
    UFUNCTION(BlueprintCallable) void OnRep_CurrentWeight();
    UFUNCTION(BlueprintCallable) void OnRep_FocusedItem();
    UFUNCTION(BlueprintCallable) void OnRep_IsDead();
    UFUNCTION(BlueprintCallable) void OnRep_IsInDropship();
    UFUNCTION(BlueprintCallable) void OnRep_IsLocalCrafting();
    UFUNCTION(BlueprintCallable) void OnRep_LightItem();
    UFUNCTION(BlueprintCallable) void OnRep_OffHandFocusedSlot();
    UFUNCTION(BlueprintCallable) void OnRep_SecondaryFocusedItem();
    UFUNCTION(BlueprintCallable) void OnShowRepairWarning();
    UFUNCTION(BlueprintCallable) void OnShowShearingWarning();
    UFUNCTION(BlueprintCallable) void OnShowUpgradeWarning();
    UFUNCTION(BlueprintCallable) void OnStaminaUpdated(UCharacterState* ActorState, float Stamina);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnStatContainerUpdated();
    UFUNCTION(BlueprintCallable) void OnSwimStrokeAnimNotify();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool OnUnFocusItem(int32 ItemLocation);  // parameters 0x5
    UFUNCTION(BlueprintCallable, Client, Reliable) void Owner_EquipmentItemBroke(FItemsStaticRowHandle Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Client, Reliable) void OwningClient_OnCraftedRecipe(FProcessorRecipesRowHandle Recipe, int32 CountInQueue);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, Client, Reliable) void OwningClient_PlaySuccessfulHitFX(AActor* HitActor, AActor* DamageCauser, EStealthAttackType WasStealthAttack, bool KillCam);  // parameters 0x12
    UFUNCTION() void PP_EnterWater__FinishedFunc();
    UFUNCTION() void PP_EnterWater__UpdateFunc();
    UFUNCTION() void PP_ExitWater__FinishedFunc();
    UFUNCTION() void PP_ExitWater__UpdateFunc();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool PickupItem(AIcarusItem* Item);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void PlayArmourBrokeSound(FItemsStaticRowHandle Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void PlayConsumableExpiredSound(FItemsStaticRowHandle ItemData);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void PlayCraftedRecipeSound(FProcessorRecipesRowHandle Recipe, int32 CountInQueue);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void PlayDamagedSound(AActor* DamageCauser, FDamageEvent DamageEvent, int32 DamageAmount);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void PlayItemBrokenSound();
    UFUNCTION(BlueprintCallable) void PlayItemDroppedSound(FItemAudioDataRowHandle ItemAudio, FVector DropLocation);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void PlayItemUseFailedSound(FItemsStaticRowHandle ItemData, FUsesRowHandle Use);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void PlayItemUsedSound(FItemsStaticRowHandle ItemData, FUsesRowHandle Use);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void PlayJumpFailedSound();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void PlayMontage(UAnimMontage* Montage, UAnimMontage* FP_Montage, bool LockMotion, FName StartingSection, FName FP_StartingSection, float PlaySpeed);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void PlayerAction(EActionableEventType ActionType, EActionableTrigger Trigger, TEnumAsByte<PlayerActionTargetTypeEnum> Target);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void PostFX_EnterWater();
    UFUNCTION(BlueprintCallable) void PostFX_ExitWater();
    UFUNCTION(BlueprintCallable) void PostFX_ExitWaterKill();
    UFUNCTION(BlueprintCallable) void PostFx_EnterWaterKill();
    UFUNCTION(BlueprintCallable) void ProcessingUpdated__DelegateSignature();
    UFUNCTION(BlueprintCallable) void QuickBar_OnDroppingOverflowItem(const FItemData& Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void Quickbar_Inventory_Updated(UInventory* Inventory, int32 Location);  // parameters 0xC, named "Quickbar Inventory Updated"
    UFUNCTION(BlueprintCallable) void QuickbarItemUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ReportPerceivedFootstepNoise(const TEnumAsByte<EPhysicalSurface>& Surface, TEnumAsByte<EPlayerAudioStance> Stance, TEnumAsByte<EFootstepType> FootstepType);  // parameters 0x3
    UFUNCTION(BlueprintCallable) void ResetOffHandFocusedSlot();
    UFUNCTION(BlueprintCallable) void ResolveGracePeriod();
    UFUNCTION(BlueprintCallable) void SFX_HitSuccess(AActor* HitActor, AActor* DamageCauser);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerDisableGridAutoFocus();
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerPlayerAction(EActionableEventType ActionType, EActionableTrigger Trigger, TEnumAsByte<PlayerActionTargetTypeEnum> Target);  // parameters 0x3
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerSetFocusedGrid(ABP_Grid_Base_C* RemoteFocusGrid);  // parameters 0x8
    UFUNCTION(BlueprintCallable, Server, Reliable) void ServerStartBuildingDestruction(ABuildingBase* BuildingToDestroy);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ServerUpdateSurvivalResouces();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_AbortInteraction();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_FocusAndUseItemFromMenu(UInventory* Inventory, int32 Slot, FUsesEnum Use);  // parameters 0x20
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_PlayWaveAnim();
    UFUNCTION(BlueprintCallable, Server, Reliable) void Server_SetCaveState(bool IsInCave);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Set_Post_Process_Visibility(bool Block);  // parameters 0x1, named "Set Post Process Visibility"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetADSOffset(const FTransform& NewOffset);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetAimVignetteIntensity(float NewIntensityTarget, float InterpSpeed);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetCaveState(bool IsInCave, AActor* CaveActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetCaveStateImpl(bool IsInCave, AActor* CaveActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable, Client, Reliable) void SetCharacterVisibility(bool NewVisible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetClientAuthority(bool ShouldHaveAuthority);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFocusedSlot(int32 NewFocused, bool ForceSet);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void SetGracePeriodState(bool State);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetHoldTimer(FKeybindingsRowHandle Keybinding, FTimerHandle Timer_Handle);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetIsTravellingInDropship(bool bIsInDropship);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMeshMontagePlayRate(USkeletalMeshComponent* Mesh, float PlayRate);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetMontagePlayRate(float PlayRate);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void SetThermalVisionActive(bool bActive);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetUnderwaterPPEnabled(bool Enabled, AActor* WaterActor);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void SetupCharacterCosmetics();
    UFUNCTION(BlueprintCallable) void SetupCharacterCustomisation();
    UFUNCTION(BlueprintCallable) void SetupGameUserSetttings();
    UFUNCTION(BlueprintCallable) void SetupWaterPP();
    UFUNCTION(BlueprintCallable) void ShearingWarningChanged__DelegateSignature();
    UFUNCTION(BlueprintCallable, Server, Reliable) void StartLocalCrafting();
    UFUNCTION(BlueprintCallable) void StatsUpdated();
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) bool StripItemTags(UInventoryComponent* Inventory, FInventoryIDEnum InventoryID, FItemData Item, int32 SlotIndex, FGameplayTagContainer& ItemTags) const;  // parameters 0x231
    UFUNCTION(BlueprintCallable, BlueprintPure) void SurfaceIsLiquid(TEnumAsByte<EPhysicalSurface> Surface, bool& IsLiquid);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void TickDamageIndicators();
    UFUNCTION(BlueprintCallable) void TickExposurePostProcess();
    UFUNCTION(BlueprintCallable) void TickPostProcessing(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void TickWaterPP();
    UFUNCTION(BlueprintCallable) void ToggleCrouchLedgeSafety(bool Value);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleCrouchUpdated(bool Toggle);  // parameters 0x1
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void ToggleFlight();
    UFUNCTION(BlueprintCallable) void ToggleGOAPWorldStats(bool Enable);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleSpintChanged(bool NewValue);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleThermalVision();
    UFUNCTION(BlueprintCallable) void TraceForCameraUnderwater(bool& IsUnderwater, AActor*& HitActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void TravellingInDropshipChanged__DelegateSignature(bool IsInDropship);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void TryCreate2DDamageIndicator(AActor* Attacker);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TryHideBackpackMesh();
    UFUNCTION(BlueprintCallable) void TryPlayDeleteBuildingFailSound();
    UFUNCTION(BlueprintCallable) void TryPlayFootstepSound(TEnumAsByte<EFootstepType> FootstepType, TEnumAsByte<EPlayerAudioStance> PlayerStance);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void TryPlaySwimStrokeSound();
    UFUNCTION(BlueprintCallable) void UnderwaterChanged__DelegateSignature(bool Underwater);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UnfocusingLogic(int32 Future_Item_Location, bool& ToDestroy, FItemData& Future_Item_Data);  // parameters 0x1F8
    UFUNCTION(BlueprintCallable) void Update_Focused_Hotbar_Slot();  // named "Update Focused Hotbar Slot"
    UFUNCTION(BlueprintCallable) void Update_Light_Slot();  // named "Update Light Slot"
    UFUNCTION(BlueprintCallable) void UpdateBackpackVisibility();
    UFUNCTION(BlueprintCallable) void UpdateCamera(FVector InLocation, FRotator InRotation, float InFOV, bool ForceUpdate, FVector& OutLocation, FRotator& OutRotation, float& OutFOV, bool& Return);  // parameters 0x3D
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UpdateCameraPerspective();
    UFUNCTION(BlueprintCallable) void UpdateCharacterCustomisation();
    UFUNCTION(BlueprintCallable, Server, Reliable) void UpdateDropLocation();
    UFUNCTION(BlueprintCallable) void UpdateEquipmentClothSim(bool Enabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateFirstPersonMeshRotation();
    UFUNCTION(BlueprintCallable) void UpdateHiddenTPBones();
    UFUNCTION(BlueprintCallable) void UpdateInventoryDropLocationsBind();
    UFUNCTION(BlueprintCallable) void UpdateLastGroundedLocation();
    UFUNCTION(BlueprintCallable) void UpdateLightSlotAttachment();
    UFUNCTION(BlueprintCallable) void UpdateMeshVisibility();
    UFUNCTION(BlueprintCallable) void UpdateMetaResourceCount(int32 NewWeight);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateStaminaAudio(float Stamina);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UpdateUtilitySlot(bool& ShowWhenFocused);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Upgrade_OnDroppingOverflowItem(const FItemData& Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void UtilityItemChanged__DelegateSignature(FItemsStaticRowHandle Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void VisionItemChanged__DelegateSignature(FItemsStaticRowHandle Item);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void VisionItemUpdated(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void Vision_OnDroppingOverflowItem(const FItemData& Item);  // parameters 0x1F0
    UFUNCTION(BlueprintCallable) void WeightUpdated(int32 NewWeight);  // parameters 0x4
};
