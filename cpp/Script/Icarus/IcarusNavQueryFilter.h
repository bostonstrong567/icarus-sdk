// /Script/Icarus.IcarusNavQueryFilter
// Derives from: UNavigationQueryFilter > UObject
// size 0x50, declared in Icarus/Source/Icarus/AI/IcarusNavQueryFilter.h

UCLASS()
class UIcarusNavQueryFilter : public UNavigationQueryFilter
{
public:
    UPROPERTY(EditAnywhere) int32 MaxNavPathSearchNodes;  // 0x0048, size 0x4
};
