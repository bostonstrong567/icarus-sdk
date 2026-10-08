// /Game/BP/UI/InventoryPlayer/BP_MountPreview.BP_MountPreview_C
// Derives from: ABP_ActorPreview_C > AActor > UObject
// size 0x2F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_MountPreview_C : public ABP_ActorPreview_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* MountMesh;  // 0x0258, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusMountCharacter* Mount;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMeshComponent*> ArmourPieces;  // 0x0268, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UpdateEquipment;  // 0x0278, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseMasterPose;  // 0x0279, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCosmetics CosmeticData;  // 0x027C, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPreviewCameraSettingsEnum CurrentCameraFocus;  // 0x02E0, size 0x10

    UFUNCTION(BlueprintCallable) void ApplyDefaultMaterialOverride(USkeletalMeshComponent* MeshComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckMountMeshes();
    UFUNCTION(BlueprintCallable) void ClearCurrentMeshes();
    UFUNCTION(BlueprintCallable) void ConstructMountMeshArray(TArray<USkeletalMesh*>& MeshArray, TArray<TSoftClassPtr<UAnimInstance>>& MeshAnimBPs, USkeletalMesh*& BodyMesh);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void ConstructPreviewMeshArray(TArray<USkeletalMesh*>& MeshArray);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_MountPreview(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceLOD_OnSkeletalMesh(USkinnedMeshComponent* InSkinnedMeshComponent, bool ForceLOD_0);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetMount(AIcarusMountCharacter*& Mount);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetShowOnlyComponents(TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void ResolveVisibility(bool& Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetCameraFocus(FPreviewCameraSettingsEnum NewCameraFocus, bool InstantUpdate);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetMount(AIcarusMountCharacter* InMount);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetupGFurComponents();
    UFUNCTION(BlueprintCallable) void TickCameraPosition(float DeltaSeconds, bool ForceInstant);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void UpdateActorPreview(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateMountMeshes(bool Force);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdatePreviewVisibility();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
