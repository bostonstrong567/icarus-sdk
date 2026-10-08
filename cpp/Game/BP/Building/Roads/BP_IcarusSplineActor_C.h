// /Game/BP/Building/Roads/BP_IcarusSplineActor.BP_IcarusSplineActor_C
// Derives from: AResourceSplineActorBase > ASplineActorBase > AActor > UObject
// size 0x348, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_IcarusSplineActor_C : public AResourceSplineActorBase
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SplineNodeMeshs;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SplineSegmentContainer;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USplineComponent* Spline;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0278, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<int32, SplineIndexStructArray> ConnectionMap;  // 0x0280, size 0x50
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TEnumAsByte<SplineTypes> SplineType;  // 0x02D0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBP_IcarusSplineSegment_C*> SplineSegmentArray;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<USceneComponent*> SplineSegmentRepresentations;  // 0x02E8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) TArray<USceneComponent*> SplineNodeRepresentations;  // 0x02F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLinearColor Debug;  // 0x0308, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) IcarusSplineMeshStruct LastSplinePointData;  // 0x0318, size 0x30

    UFUNCTION(BlueprintCallable) void AddConnection(int32 LocalIndex, ABP_IcarusSplineActor_C* OtherSpline, int32 OtherSplineIndex, bool AddBackwardsConnection, bool BypassBoundsCheck, bool& Success);  // parameters 0x17
    UFUNCTION(BlueprintCallable) void ChangeLastSegmentsGhostColor(UMaterialInterface* RepGhostMaterial);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Cleanup();
    UFUNCTION(BlueprintCallable) void ConfigureSegmentFromType(TSubclassOf<UPrimitiveComponent>& RepresentitiveClass, UStaticMesh*& RepSegmentMesh, UMaterialInterface*& RepSegmentFinalMaterial, int32& Materialndex, bool& UseNodeMeshes, FVector& SegmentOffset, UStaticMesh*& NodeMesh, UMaterialInterface*& NodeMaterial);  // parameters 0x40
    UFUNCTION(BlueprintCallable) void Create_New_Spline_Point_and_Segment(FVector InputPin, TEnumAsByte<ESplinePointType> SplinePointType);  // parameters 0xD, named "Create New Spline Point and Segment"
    UFUNCTION(BlueprintCallable) void Create_Spline_representations_Starting_at_Point(int32 StartSplinePointIndex);  // parameters 0x4, named "Create Spline representations Starting at Point"
    UFUNCTION(BlueprintCallable) void CreateNewNet();
    UFUNCTION(BlueprintCallable) void DelayCleanupCheck();
    UFUNCTION(BlueprintCallable) void DoTwoSplineConnectAtThisSplineIndex(ABP_IcarusSplineActor_C* Spline1, ABP_IcarusSplineActor_C* Spline2, int32 TestIndex);  // parameters 0x14
    UFUNCTION() void ExecuteUbergraph_BP_IcarusSplineActor(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Finalize_Current_Spline_Segment();  // named "Finalize Current Spline Segment"
    UFUNCTION(BlueprintCallable) void FinalizeCurrentPointAndAddNew(FVector World_Space_Point_Posititon, FTransform ImpactNormalTrans, TEnumAsByte<ESplinePointType> SplinePointType);  // parameters 0x41
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetNetworkType(FIcarusResourcesEnum& NetworkType);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) FVector GetSecondLastPointWorldLocation();  // parameters 0xC
    UFUNCTION(BlueprintCallable) void GetSplineSegmentFromRepresentation(USceneComponent* SplineSegmentRepresentation, UBP_IcarusSplineSegment_C*& SplineSegment, bool& Success);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void Grab_Back_Pointers_To_Index(int32 IndexOnThisSpline);  // parameters 0x4, named "Grab Back Pointers To Index"
    UFUNCTION(BlueprintCallable) void IsAlreadyConnectedToSpline(ABP_IcarusSplineActor_C* Other_Spline, bool& Connected);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void IsPointCloserToEnd(FVector Point, bool& PointCloserToEnd);  // parameters 0xD
    UFUNCTION(BlueprintCallable) void OnRep_LastSplinePointData();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void PostDatabaseSpawn(const FRecordedSplineActorStruct& FromDatabase);  // parameters 0x88
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void ReconnectFromDatabase(const FRecordedSplineActorStruct& FromDatabase, const TArray<AActor*>& RelevantActors);  // parameters 0x98
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FRecordedSplineActorStruct RecordSplineState();  // parameters 0x88
    UFUNCTION(BlueprintCallable) void Remove_Last_Point_and_Segment(bool RemoveNodeMesh, bool& Error);  // parameters 0x2, named "Remove Last Point and Segment"
    UFUNCTION(BlueprintCallable) void Remove_Segment_Connected_To_Component(UResourceNetworkComponent* ResourceNetworkComponent);  // parameters 0x8, named "Remove Segment Connected To Component"
    UFUNCTION(BlueprintCallable) void RemoveConnectionTwoWay(int32 LocalIndex, ABP_IcarusSplineActor_C* OtherSpline, int32 OtherSplineIndex, bool& Error);  // parameters 0x15
    UFUNCTION(BlueprintCallable) void Replace_Spline_Pointers(int32 NewSplineIndex, SplineIndexStruct SplineIndexStruct, ABP_IcarusSplineActor_C* New_Spline);  // parameters 0x20, named "Replace Spline Pointers"
    UFUNCTION(BlueprintCallable) void SplitSplineAtSegment(UBP_IcarusSplineSegment_C* SplineSegment, bool RecalcNets, TEnumAsByte<ESplinePointType> SplinePointType, ABP_IcarusSplineActor_C*& NewSplitSpline);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void Update_Last_Spline_Point_And_Segment(FVector Updated_Point_Posititon, FTransform UpdatedHitNormalTransform, bool ManipulateSplineNode, TEnumAsByte<ESplinePointType> SplinePointType);  // parameters 0x42, named "Update Last Spline Point And Segment"
    UFUNCTION(BlueprintCallable) void Update_Spline_Start_to_Spline_Segment_end(UBP_IcarusSplineSegment_C* SplineSegment, int32 SplinePointIndex, bool& Success);  // parameters 0xD, named "Update Spline Start to Spline Segment end"
    UFUNCTION(BlueprintCallable) void Update_Spline_To_Another_Spline_Segment(bool FinalUpdate, UBP_IcarusSplineSegment_C* SplineSegment, bool& Success);  // parameters 0x11, named "Update Spline To Another Spline Segment"
    UFUNCTION(BlueprintCallable) void UpdateLastSplinePointData(bool Invert);  // parameters 0x1
};
