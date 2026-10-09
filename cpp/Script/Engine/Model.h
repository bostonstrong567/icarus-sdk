// /Script/Engine.Model
// Derives from: UObject
// size 0x258, declared in Engine/Source/Runtime/Engine/Public/Model.h

UCLASS()
class UModel : public UObject
{
public:
    TArray<FBspNode,TSizedDefaultAllocator<32> > Nodes;  // 0x0028, not reflected
    TArray<FVert,TSizedDefaultAllocator<32> > Verts;  // 0x0038, not reflected
    TArray<FVector,TSizedDefaultAllocator<32> > Vectors;  // 0x0048, not reflected
    TArray<FVector,TSizedDefaultAllocator<32> > Points;  // 0x0058, not reflected
    TArray<FBspSurf,TSizedDefaultAllocator<32> > Surfs;  // 0x0068, not reflected
    TArray<FLightmassPrimitiveSettings,TSizedDefaultAllocator<32> > LightmassSettings;  // 0x0078, not reflected
    TMap<UMaterialInterface *,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface *,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32> >,0> > MaterialIndexBuffers;  // 0x0088, not reflected
    FModelVertexBuffer VertexBuffer;  // 0x00D8, not reflected
    FRenderCommandFence ReleaseResourcesFence;  // 0x0208, not reflected
    bool InvalidSurfaces;  // 0x0218, not reflected
    bool bOnlyRebuildMaterialIndexBuffers;  // 0x0219, not reflected
    bool bInvalidForStaticLighting;  // 0x021A, not reflected
    uint32 NumUniqueVertices;  // 0x021C, not reflected
    FGuid LightingGuid;  // 0x0220, not reflected
    bool RootOutside;  // 0x0230, not reflected
    bool Linked;  // 0x0231, not reflected
    int32 NumSharedSides;  // 0x0234, not reflected
    FBoxSphereBounds Bounds;  // 0x0238, not reflected
};
