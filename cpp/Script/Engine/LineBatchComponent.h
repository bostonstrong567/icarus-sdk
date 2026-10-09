// /Script/Engine.LineBatchComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x490, declared in Engine/Source/Runtime/Engine/Classes/Components/LineBatchComponent.h

UCLASS(MinimalAPI, Config=Engine)
class ULineBatchComponent : public UPrimitiveComponent
{
public:
    TArray<FBatchedLine,TSizedDefaultAllocator<32> > BatchedLines;  // 0x0450, not reflected
    TArray<FBatchedPoint,TSizedDefaultAllocator<32> > BatchedPoints;  // 0x0460, not reflected
    float DefaultLifeTime;  // 0x0470, not reflected
    TArray<FBatchedMesh,TSizedDefaultAllocator<32> > BatchedMeshes;  // 0x0478, not reflected
    uint32 : 1 bCalculateAccurateBounds;  // 0x0488, not reflected

    // Virtual functions that start here:
    //   DrawLine, DrawPoint
};
