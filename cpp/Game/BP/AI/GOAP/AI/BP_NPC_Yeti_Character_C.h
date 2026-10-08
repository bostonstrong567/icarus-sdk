// /Game/BP/AI/GOAP/AI/BP_NPC_Yeti_Character.BP_NPC_Yeti_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD01, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Yeti_Character_C : public ABP_IcarusNPCGOAPCharacter_C, public IShowHideCharacterProxyMeshInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* RockMesh;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_HornR;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCapsuleComponent* CriticalArea_HornL;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_EyeR;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USphereComponent* CriticalArea_EyeL;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0CF8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0D00, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_NPC_Yeti_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) TMap<UPrimitiveComponent*, FCriticalHitAreasEnum> GetCriticalHitAreas() const;  // parameters 0x50
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) FVector GetDamageSourceLocation(UAnimMontage* Montage, FName SectionName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool GetMontageForAction(const TSoftClassPtr<UIcarusGOAPAction>& Action, TSoftObjectPtr<UAnimMontage>& ActionMontage, FName& MontageSection, FName& MontageNotify);  // parameters 0x61
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_ShowRockMesh(bool Show);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ShowHideProxyMesh(bool bShow, int32 MeshIndex);  // parameters 0x8
};
