// /Script/Engine.LineBatchComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x490, declared in Engine/Source/Runtime/Engine/Classes/Components/LineBatchComponent.h

UCLASS(MinimalAPI, Config=Engine)
class ULineBatchComponent : public UPrimitiveComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FBatchedLine,TSizedDefaultAllocator<32> > BatchedLines;  // 0x0450
    TArray<FBatchedPoint,TSizedDefaultAllocator<32> > BatchedPoints;  // 0x0460
    float DefaultLifeTime;  // 0x0470
    TArray<FBatchedMesh,TSizedDefaultAllocator<32> > BatchedMeshes;  // 0x0478
    uint32 : 1 bCalculateAccurateBounds;  // 0x0488

    // Virtual functions that start here:
    //   DrawLine, DrawPoint
};
