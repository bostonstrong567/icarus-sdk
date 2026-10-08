// /Script/EditableMesh.EInsetPolygonsMode
UENUM()
enum class EInsetPolygonsMode : uint8
{
    All = 0,
    CenterPolygonOnly = 1,
    SidePolygonsOnly = 2,
};

// /Script/EditableMesh.EMeshElementAttributeType
UENUM()
enum class EMeshElementAttributeType : uint8
{
    None = 0,
    FVector4 = 1,
    FVector = 2,
    FVector2D = 3,
    Float = 4,
    Int = 5,
    Bool = 6,
    FName = 7,
};

// /Script/EditableMesh.EMeshModificationType
UENUM()
enum class EMeshModificationType : uint8
{
    FirstInterim = 0,
    Interim = 1,
    Final = 2,
};

// /Script/EditableMesh.EMeshTopologyChange
UENUM()
enum class EMeshTopologyChange : uint8
{
    NoTopologyChange = 0,
    TopologyChange = 1,
};

// /Script/EditableMesh.EPolygonEdgeHardness
UENUM()
enum class EPolygonEdgeHardness : uint8
{
    NewEdgesSoft = 0,
    NewEdgesHard = 1,
    AllEdgesSoft = 2,
    AllEdgesHard = 3,
};

// /Script/EditableMesh.ETriangleTessellationMode
UENUM()
enum class ETriangleTessellationMode : uint8
{
    ThreeTriangles = 0,
    FourTriangles = 1,
};
