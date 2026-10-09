// /Script/NavigationSystem.NavCollision
// Derives from: UNavCollisionBase > UObject
// size 0xD8, declared in Engine/Source/Runtime/NavigationSystem/Public/NavCollision.h

UCLASS(Config=Engine)
class UNavCollision : public UNavCollisionBase
{
public:
    TNavStatArray<int> ConvexShapeIndices;  // 0x0070, not reflected
    UPROPERTY(EditAnywhere) TArray<FNavCollisionCylinder> CylinderCollision;  // 0x0080, size 0x10
    UPROPERTY(EditAnywhere) TArray<FNavCollisionBox> BoxCollision;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) TSubclassOf<UNavArea> AreaClass;  // 0x00A0, size 0x8
    uint32 : 1 bForceGeometryRebuild;  // 0x00A8, not reflected
    UPROPERTY(EditAnywhere, Config) uint8 bGatherConvexGeometry : 1;  // 0x00A8, mask 0x01
    UPROPERTY(EditAnywhere, Config) uint8 bCreateOnClient : 1;  // 0x00A8, mask 0x02
    FGuid BodySetupGuid;  // 0x00AC, not reflected
    FFormatContainer CookedFormatData;  // 0x00C0, not reflected
};
