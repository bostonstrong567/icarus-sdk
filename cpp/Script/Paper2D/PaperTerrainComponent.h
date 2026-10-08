// /Script/Paper2D.PaperTerrainComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x4B0, declared in Engine/Plugins/2D/Paper2D/Source/Paper2D/Classes/PaperTerrainComponent.h

UCLASS(Config=Engine)
class UPaperTerrainComponent : public UPrimitiveComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UPaperTerrainMaterial* TerrainMaterial;  // 0x0450, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bClosedSpline;  // 0x0458, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bFilledSpline;  // 0x0459, size 0x1
    UPROPERTY(Instanced) UPaperTerrainSplineComponent* AssociatedSpline;  // 0x0460, size 0x8
    UPROPERTY(EditAnywhere) int32 RandomSeed;  // 0x0468, size 0x4
    UPROPERTY(EditAnywhere) float SegmentOverlapAmount;  // 0x046C, size 0x4
    UPROPERTY(EditAnywhere, Interp, BlueprintReadOnly) FLinearColor TerrainColor;  // 0x0470, size 0x10
    UPROPERTY(EditAnywhere) int32 ReparamStepsPerSegment;  // 0x0480, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<ESpriteCollisionMode> SpriteCollisionDomain;  // 0x0484, size 0x1
    UPROPERTY(EditAnywhere) float CollisionThickness;  // 0x0488, size 0x4
    UPROPERTY(Transient) UBodySetup* CachedBodySetup;  // 0x0490, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    TArray<FPaperTerrainSpriteGeometry,TSizedDefaultAllocator<32> > GeneratedSpriteGeometry;  // 0x0498, protected

    UFUNCTION(BlueprintCallable) void SetTerrainColor(FLinearColor NewColor);  // parameters 0x10
};
