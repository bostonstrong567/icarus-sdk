// /Game/Developers/samprebble/DevFolder3/BP_RIVERSPLINE.BP_RIVERSPLINE_C
// Derives from: AActor > UObject
// size 0x2C0, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_RIVERSPLINE_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USplineComponent* Spline;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USplineComponent* TransientSpline;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<USplineMeshComponent*> SplineMeshes;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ABP_RIVERSPLINE_C* MasterSpline;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SplitSpline;  // 0x0250, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<ALandscape> ModifyLandscape;  // 0x0258, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ULandscapeLayerInfoObject* PaintStones;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float PointRange;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float WiggleRange;  // 0x028C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRandomStream Stream;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<float> MeshScaling;  // 0x0298, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BankSize;  // 0x02A8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float BankFalloff;  // 0x02AC, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RiverDigSize;  // 0x02B0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RiverDigFalloff;  // 0x02B4, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float OverallSize;  // 0x02B8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float DeformGlobalScale;  // 0x02BC, size 0x4

    UFUNCTION(BlueprintCallable) void AlignSpline();
    UFUNCTION(BlueprintCallable) void AutoWiggle();
    UFUNCTION(BlueprintCallable) void Bake();
    UFUNCTION(BlueprintCallable) void Branch();
    UFUNCTION(BlueprintCallable) void ConformLandscape();
    UFUNCTION(BlueprintCallable) void FixMeshScaling();
    UFUNCTION(BlueprintCallable) void GenerateSplineMesh(bool WorldSpace);  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetSpline(USplineComponent*& Output);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void JitterScales();
    UFUNCTION(BlueprintCallable) void MakeSplineLegal();
    UFUNCTION(BlueprintCallable) void OffsetSpline(FVector OffsetAmount);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void PreviewDebug();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
    UFUNCTION(BlueprintCallable) void Wiggle();
};
