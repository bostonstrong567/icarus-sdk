// /Game/BP/AI/GOAP/AI/BP_NPC_Giant_Roach_Character.BP_NPC_Giant_Roach_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xCF0, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Giant_Roach_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* TentacleOverlap;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_Underbelly;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0CD8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0CE0, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UNiagaraComponent* OverlapZap;  // 0x0CE8, size 0x8

    UFUNCTION() void BndEvt__BP_NPC_Giant_Roach_Character_TentacleOverlap_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Giant_Roach_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Get_Stance_Transition_Montage(EGOAPCharacterStance NewStance, UAnimMontage*& OutMontage);  // parameters 0x10, named "Get Stance Transition Montage"
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FCriticalHitAreasEnum GetDefaultCriticalArea() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, NetMulticast) void MULTI_OverlapFX();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void UpdateZapLocation();
};
