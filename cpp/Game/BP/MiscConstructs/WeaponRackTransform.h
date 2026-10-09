// /Game/BP/MiscConstructs/WeaponRackTransform.WeaponRackTransform
// size 0x50

USTRUCT()
struct WeaponRackTransform
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTransform WeaponTransform;  // 0x0000, size 0x30
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTagQueriesRowHandle WeaponQuery;  // 0x0030, size 0x18
};
