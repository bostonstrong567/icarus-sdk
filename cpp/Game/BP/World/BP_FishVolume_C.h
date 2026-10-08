// /Game/BP/World/BP_FishVolume.BP_FishVolume_C
// Derives from: ALake > AWaterBody > AIcarusActor > AActor > UObject
// size 0x3C4, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FishVolume_C : public ALake
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_LakePointComponent_C* BP_LakePointComponent;  // 0x0378, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USplineComponent* NewEdgeSpline;  // 0x0380, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PointDensity;  // 0x0388, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FVector> _;  // 0x0390, size 0x10, named ""
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) bool VisualiseWaterPoints;  // 0x03A0, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBillboardComponent* Billboard;  // 0x03A8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UBoxComponent* WaterVolume;  // 0x03B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector VolumeExtent;  // 0x03B8, size 0xC

    UFUNCTION() void ExecuteUbergraph_BP_FishVolume(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GenerateWaterPoints();
    UFUNCTION(BlueprintCallable) void OnComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void OnComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SanitiseScale();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void VisualisePoints();
};
