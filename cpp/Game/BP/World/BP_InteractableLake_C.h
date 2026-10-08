// /Game/BP/World/BP_InteractableLake.BP_InteractableLake_C
// Derives from: ALake > AWaterBody > AIcarusActor > AActor > UObject
// size 0x418, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_InteractableLake_C : public ALake
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpringArmComponent* SpringArm;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextRenderComponent* TextRender;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNavBlockingStaticMeshComponent* NavBlockingStaticMesh;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* WaterPhysics;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* UnderwaterMesh;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* LakeEdge;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_LakeAudioComponent_C* BP_LakeAudioComponent;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SurfaceMesh;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHighlightableComponent* Highlightable;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UNavModifierComponent* NavModifier;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x03C0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool ManualPlacement;  // 0x03C8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<URuntimeVirtualTexture*> VirtualTexture;  // 0x03D0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Water_Edges;  // 0x03E0, size 0x1, named "Water Edges"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Edit_Water_Edge;  // 0x03E1, size 0x1, named "Edit Water Edge"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESplineLoopDirection EdgeSplineDirection;  // 0x03E2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> EdgeSplinePoints;  // 0x03E8, size 0x10
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) ULakeSplineComponent* LakeSpline;  // 0x03F8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float LakeDepth;  // 0x0400, size 0x4
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) UMaterialInterface* OverrideMaterial;  // 0x0408, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool PermitNavigable;  // 0x0410, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CullDistOverride;  // 0x0414, size 0x4

    UFUNCTION() void BndEvt__BP_InteractableLake_WaterPhysics_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION() void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION() void ExecuteUbergraph_BP_InteractableLake(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) TArray<UPrimitiveComponent*> GetNavAffectingComponents() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void InitialiseAudio();
    UFUNCTION(BlueprintCallable) void OnLoaded_B607BE074B40775DC6E9828DC398DAE2(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetHighlightable();
    UFUNCTION(BlueprintCallable) void SetInteractableType();
    UFUNCTION(BlueprintCallable) void SetUpEdgeSpline();
    UFUNCTION(BlueprintCallable) void SetupGOAPWaterNodes();
    UFUNCTION(BlueprintCallable) void UpdateTextRenderer(UTextRenderComponent* TextRenderer, float ZoneQuality);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
