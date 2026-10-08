// /Script/Engine.BodySetup
// Derives from: UBodySetupCore > UObject
// size 0x2A0, declared in Engine/Source/Runtime/Engine/Classes/PhysicsEngine/BodySetup.h

UCLASS(MinimalAPI)
class UBodySetup : public UBodySetupCore
{
public:
    UPROPERTY(EditAnywhere) FKAggregateGeom AggGeom;  // 0x0048, size 0x58
    UPROPERTY(Deprecated) uint8 bAlwaysFullAnimWeight : 1;  // 0x00A0, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bConsiderForBounds : 1;  // 0x00A0, mask 0x02
    UPROPERTY(Transient) uint8 bMeshCollideAll : 1;  // 0x00A0, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bDoubleSidedGeometry : 1;  // 0x00A0, mask 0x08
    UPROPERTY() uint8 bGenerateNonMirroredCollision : 1;  // 0x00A0, mask 0x10
    UPROPERTY() uint8 bSharedCookedData : 1;  // 0x00A0, mask 0x20
    UPROPERTY() uint8 bGenerateMirroredCollision : 1;  // 0x00A0, mask 0x40
    UPROPERTY() uint8 bSupportUVsAndFaceRemap : 1;  // 0x00A0, mask 0x80
    UPROPERTY(EditAnywhere) UPhysicalMaterial* PhysMaterial;  // 0x00A8, size 0x8
    UPROPERTY(EditAnywhere) FWalkableSlopeOverride WalkableSlopeOverride;  // 0x00B0, size 0x10
    UPROPERTY(EditAnywhere) FBodyInstance DefaultInstance;  // 0x0128, size 0x158
    UPROPERTY() FVector BuildScale3D;  // 0x0288, size 0xC

    // Not reflected: the engine's scripting cannot see these.
    uint8 : 1 bCreatedPhysicsMeshes;  // 0x00A1
    uint8 : 1 bFailedToCreatePhysicsMeshes;  // 0x00A1
    uint8 : 1 bHasCookedCollisionData;  // 0x00A1
    uint8 : 1 bNeverNeedsCookedCollisionData;  // 0x00A1
    FFormatContainer CookedFormatData;  // 0x00C0
    FGuid BodySetupGuid;  // 0x00D8
    FBodySetupUVInfo UVInfo;  // 0x00E8
    TArray<int,TSizedDefaultAllocator<32> > FaceRemap;  // 0x0118
    FFormatContainer * CookedFormatDataOverride;  // 0x0280
    FPhysXCookHelper * CurrentCookHelper;  // 0x0298

    // Virtual functions that start here:
    //   CalculateMass, CreatePhysicsMeshes, GetVolume, InvalidatePhysicsData
};
