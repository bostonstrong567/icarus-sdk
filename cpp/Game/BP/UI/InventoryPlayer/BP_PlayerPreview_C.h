// /Game/BP/UI/InventoryPlayer/BP_PlayerPreview.BP_PlayerPreview_C
// Derives from: ABP_ActorPreview_C > AActor > UObject
// size 0x2F0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_PlayerPreview_C : public ABP_ActorPreview_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USkeletalMeshComponent* PlayerMesh;  // 0x0258, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerCharacter* Player;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USkeletalMeshComponent*> ArmourPieces;  // 0x0268, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UpdateEquipment;  // 0x0278, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseMasterPose;  // 0x0279, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCosmetics CosmeticData;  // 0x027C, size 0x60
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FPreviewCameraSettingsEnum CurrentCameraFocus;  // 0x02E0, size 0x10

    UFUNCTION(BlueprintCallable) void ApplyDefaultMaterialOverride(USkeletalMeshComponent* MeshComponent);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void CheckPlayerMeshes();
    UFUNCTION(BlueprintCallable) void ClearCurrentMeshes();
    UFUNCTION(BlueprintCallable) void ConstructPlayerMeshArray(TArray<USkeletalMesh*>& MeshArray, TArray<TSoftClassPtr<UAnimInstance>>& MeshAnimBPs, USkeletalMesh*& BodyMesh, TArray<FName>& MeshTags);  // parameters 0x38
    UFUNCTION(BlueprintCallable) void ConstructPreviewMeshArray(TArray<USkeletalMesh*>& MeshArray);  // parameters 0x10
    UFUNCTION() void ExecuteUbergraph_BP_PlayerPreview(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceLOD_OnSkeletalMesh(USkeletalMeshComponent* InSkeletalMeshComponent, bool ForceLOD_0);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetPlayer(AIcarusPlayerCharacter*& Player);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void GetShowOnlyComponents(TArray<UPrimitiveComponent*>& OutComponents);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetCameraFocus(FPreviewCameraSettingsEnum NewCameraFocus, bool InstantUpdate);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetPlayer(AIcarusPlayerCharacter* InPlayer);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void TickCameraPosition(float DeltaSeconds, bool ForceInstant);  // parameters 0x5
    UFUNCTION(BlueprintCallable) void UpdateActorPreview(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdatePlayerMeshes(bool Force);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdatePreviewVisibility();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
