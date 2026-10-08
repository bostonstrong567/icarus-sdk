// /Game/BP/Objects/World/Items/Deployables/BP_DeployablePreview.BP_DeployablePreview_C
// Derives from: AStaticMeshActor > AActor > UObject
// size 0x288, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_DeployablePreview_C : public AStaticMeshActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UWidgetComponent* RotatorWidget;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* BoundsCollider;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UStaticMesh* MeshRef;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WidgetDrawSize;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EWorldPlacementType PlacementType;  // 0x0254, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ExtentOffset;  // 0x0258, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector OriginOffset;  // 0x0264, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector ExtentScale;  // 0x0270, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool InitialShowRotator;  // 0x027C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EnableShelterChecks;  // 0x027D, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UShelteredModifierComponent* ShelterModifier;  // 0x0280, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintPure) void CalcExtentOffset(FVector& ExtentOffset) const;  // parameters 0xC
    UFUNCTION() void ExecuteUbergraph_BP_DeployablePreview(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetInitialRotator(bool Visible);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ToggleRotationIndicator(bool Enabled, bool SnappingAvailable);  // parameters 0x2
    UFUNCTION(BlueprintCallable) void UpdateMaterials(bool ValidPlacement);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
