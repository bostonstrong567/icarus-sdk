// /Script/AIModule.EnvQueryItemType
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h

UCLASS(Abstract)
class UEnvQueryItemType : public UObject
{
protected:
    uint16 ValueSize;  // 0x0028, not reflected

    // Virtual functions that start here:
    //   AddBlackboardFilters, GetDescription, StoreInBlackboard
};
