// /Script/Engine.StaticMeshComponentLODInfo
// size 0x90, declared in Engine/Source/Runtime/Engine/Classes/Components/StaticMeshComponent.h

USTRUCT()
struct FStaticMeshComponentLODInfo
{

    // Not reflected:
    FGuid MapBuildDataId;  // 0x0000
    FMeshMapBuildData * LegacyMapBuildData;  // 0x0010
    TUniquePtr<FMeshMapBuildData,TDefaultDelete<FMeshMapBuildData> > OverrideMapBuildData;  // 0x0018
    TArray<FPaintedVertex,TSizedDefaultAllocator<32> > PaintedVertices;  // 0x0020
    FColorVertexBuffer * OverrideVertexColors;  // 0x0030
    TArray<FPreCulledStaticMeshSection,TSizedDefaultAllocator<32> > PreCulledSections;  // 0x0038
    FRawStaticIndexBuffer PreCulledIndexBuffer;  // 0x0048
    UStaticMeshComponent * OwningComponent;  // 0x0088
};
