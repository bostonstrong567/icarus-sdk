// /Game/BP/Audio/Environment/BP_LakeAudio.BP_LakeAudio_C
// Derives from: AActor > UObject
// size 0x2A0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_LakeAudio_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* Box;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SplineGenerationExclusionZones;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* SplineGenerationTracePoints;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* SplineGenerationBounds;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Islands;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_LakeAudioComponent_C* BP_LakeAudioComponent;  // 0x0258, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) ULakeSplineComponent* LakeSpline;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float EdgeSplineDensity;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 EdgeSplineSimplificationFactor;  // 0x0274, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> CameraTracePoints;  // 0x0278, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FWaterSetupRowHandle WaterSetup;  // 0x0288, size 0x18

    UFUNCTION(BlueprintCallable) void AddCameraTracePoint();
    UFUNCTION() void ExecuteUbergraph_BP_LakeAudio(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateSpline();
    UFUNCTION(BlueprintCallable) void GetIslandSplines(TArray<UEdgeSplineComponent*>& IslandSplines);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetTracePointLocations(TArray<FVector>& Points);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void IsPointInBounds(FVector Location, UBoxComponent* Box, bool& IsInBounds);  // parameters 0x19
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void RemoveEdgePointsFromExclusionZones(TArray<FVector>& Points, TArray<FVector>& UpdatedPoints);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SimplifyEdgeSpline();
    UFUNCTION(BlueprintCallable) void SnapToWaterPlane();
    UFUNCTION(BlueprintCallable) void ValidateSplines();
};
