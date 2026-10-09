// /Script/Engine.StaticMeshComponentLODInfo
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Components/StaticMeshComponent.h

USTRUCT()
struct FStaticMeshComponentLODInfo
{
public:
    FGuid MapBuildDataId;  // 0x0000, not reflected
    FMeshMapBuildData * LegacyMapBuildData;  // 0x0010, not reflected
    TUniquePtr<FMeshMapBuildData,TDefaultDelete<FMeshMapBuildData> > OverrideMapBuildData;  // 0x0018, not reflected
    TArray<FPaintedVertex,TSizedDefaultAllocator<32> > PaintedVertices;  // 0x0020, not reflected
    FColorVertexBuffer * OverrideVertexColors;  // 0x0030, not reflected
    TArray<FPreCulledStaticMeshSection,TSizedDefaultAllocator<32> > PreCulledSections;  // 0x0038, not reflected
    FRawStaticIndexBuffer PreCulledIndexBuffer;  // 0x0048, not reflected
    UStaticMeshComponent * OwningComponent;  // 0x0088, not reflected
};
