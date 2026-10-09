// /Script/NavigationSystem.NavigationQueryFilter
// Derives from: UObject
// size 0x48, declared in Engine/Source/Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h

UCLASS(Abstract)
class UNavigationQueryFilter : public UObject
{
public:
    UPROPERTY(EditAnywhere) TArray<FNavigationFilterArea> Areas;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) FNavigationFilterFlags IncludeFlags;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) FNavigationFilterFlags ExcludeFlags;  // 0x003C, size 0x4
protected:
    uint32 : 1 bInstantiateForQuerier;  // 0x0040, not reflected
    uint32 : 1 bIsMetaFilter;  // 0x0040, not reflected

    // Virtual functions that start here:
    //   GetSimpleFilterForAgent, InitializeFilter
};
