// /Script/Engine.Model
// Derives from: UObject
// size 0x258, declared in Engine/Source/Runtime/Engine/Public/Model.h

UCLASS()
class UModel : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FBspNode,TSizedDefaultAllocator<32> > Nodes;  // 0x0028
    TArray<FVert,TSizedDefaultAllocator<32> > Verts;  // 0x0038
    TArray<FVector,TSizedDefaultAllocator<32> > Vectors;  // 0x0048
    TArray<FVector,TSizedDefaultAllocator<32> > Points;  // 0x0058
    TArray<FBspSurf,TSizedDefaultAllocator<32> > Surfs;  // 0x0068
    TArray<FLightmassPrimitiveSettings,TSizedDefaultAllocator<32> > LightmassSettings;  // 0x0078
    TMap<UMaterialInterface *,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UMaterialInterface *,TUniquePtr<FRawIndexBuffer16or32,TDefaultDelete<FRawIndexBuffer16or32> >,0> > MaterialIndexBuffers;  // 0x0088
    FModelVertexBuffer VertexBuffer;  // 0x00D8
    FRenderCommandFence ReleaseResourcesFence;  // 0x0208
    bool InvalidSurfaces;  // 0x0218
    bool bOnlyRebuildMaterialIndexBuffers;  // 0x0219
    bool bInvalidForStaticLighting;  // 0x021A
    uint32 NumUniqueVertices;  // 0x021C
    FGuid LightingGuid;  // 0x0220
    bool RootOutside;  // 0x0230
    bool Linked;  // 0x0231
    int32 NumSharedSides;  // 0x0234
    FBoxSphereBounds Bounds;  // 0x0238
};
