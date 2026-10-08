// /Game/BP/AI/GOAP/AI/BP_NPC_RockDog_Character.BP_NPC_RockDog_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD2A, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_RockDog_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UPointLightComponent* PointLight_Enraged_0;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Right_Leg;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Left_Leg;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Jaw_2;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Jaw_1;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Back_2;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CritArea_Back_1;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CF8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0D00, size 0x8
    UPROPERTY() float EnrageEndTimeline_EmissiveAlpha_CED2A1C045DCA9A341C04F82AED8CC4B;  // 0x0D08, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> EnrageEndTimeline__Direction_CED2A1C045DCA9A341C04F82AED8CC4B;  // 0x0D0C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* EnrageEndTimeline;  // 0x0D10, size 0x8
    UPROPERTY() float EnrageTimeline_EmissiveAlpha_20034C3245CA7602695210908A058CF9;  // 0x0D18, size 0x4
    UPROPERTY() TEnumAsByte<ETimelineDirection> EnrageTimeline__Direction_20034C3245CA7602695210908A058CF9;  // 0x0D1C, size 0x1
    UPROPERTY(Instanced, BlueprintReadWrite) UTimelineComponent* EnrageTimeline;  // 0x0D20, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0D28, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool IsEnraged;  // 0x0D29, size 0x1

    UFUNCTION() void EnrageEndTimeline__FinishedFunc();
    UFUNCTION() void EnrageEndTimeline__UpdateFunc();
    UFUNCTION() void EnrageTimeline__FinishedFunc();
    UFUNCTION() void EnrageTimeline__UpdateFunc();
    UFUNCTION() void ExecuteUbergraph_BP_NPC_RockDog_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintCallable) void OnFootstepAnimNotify(TEnumAsByte<ECreatureFootstepType> FootstepType, TEnumAsByte<ECreatureFootstepDirection> FootstepDirection);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void OnRep_IsEnraged();
    UFUNCTION(BlueprintCallable) void ReplicateBlackboardVariables();
    UFUNCTION(BlueprintCallable) void StartEnrageEffects();
    UFUNCTION(BlueprintCallable) void StopEnrageEffects();
    UFUNCTION(BlueprintCallable) void UpdateEnrageMaterialStrength(float Strength);  // parameters 0x4
};
