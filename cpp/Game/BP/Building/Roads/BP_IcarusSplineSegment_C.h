// /Game/BP/Building/Roads/BP_IcarusSplineSegment.BP_IcarusSplineSegment_C
// Derives from: UIcarusSplineSegment > USceneComponent > UActorComponent > UObject
// size 0x2B0, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_IcarusSplineSegment_C : public UIcarusSplineSegment
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0200, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) IcarusSplineMeshStruct RepSplineData;  // 0x0208, size 0x30
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) UMaterialInterface* RepFinalMaterial;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) UStaticMesh* RepMesh;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool Ghost;  // 0x0248, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, Instanced, BlueprintReadWrite) UPrimitiveComponent* RepresentitiveComponent;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UPrimitiveComponent> RepresentitiveClass;  // 0x0258, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 SegmentIndex;  // 0x0260, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool debug_begin_play_finished;  // 0x0264, size 0x1, named "debug begin play finished"
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) UMaterialInterface* RepGhostMaterial;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FVector RepOffset;  // 0x0270, size 0xC
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 ChangableMaterialIndex;  // 0x027C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) IcarusSplineMeshStruct LocalSplineData;  // 0x0280, size 0x30

    UFUNCTION() void ExecuteUbergraph_BP_IcarusSplineSegment(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSplineData(IcarusSplineMeshStruct& SplineData) const;  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsLocalSplineDataValid() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void IsPointCloserToStart(FVector WorldLocationPoint, bool& CloserToStart);  // parameters 0xD
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void MULTI_ForceUpdateLocalSplineData(IcarusSplineMeshStruct LocalSplineData);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void OnRep_Ghost();
    UFUNCTION(BlueprintCallable) void OnRep_RepFinalMaterial();
    UFUNCTION(BlueprintCallable) void OnRep_RepGhostMaterial();
    UFUNCTION(BlueprintCallable) void OnRep_RepMesh();
    UFUNCTION(BlueprintCallable) void OnRep_RepOffset();
    UFUNCTION(BlueprintCallable) void OnRep_RepSplineData();
    UFUNCTION(BlueprintCallable) void OnRep_RepresentitiveComponent();
    UFUNCTION(BlueprintCallable) void OnRep_SegmentIndex();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void Set_Spline_Start_and_End(FVector Start_Pos, FVector Start_Tan, FVector End_Pos, FVector End_Tan, bool UpdateOnClients);  // parameters 0x31, named "Set Spline Start and End"
    UFUNCTION(BlueprintCallable) void SetSplineData(IcarusSplineMeshStruct SplineData);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void async_reinit();  // named "async reinit"
    UFUNCTION(BlueprintCallable) void init();
};
