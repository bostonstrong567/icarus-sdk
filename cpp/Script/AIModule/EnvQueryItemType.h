// /Script/AIModule.EnvQueryItemType
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h

UCLASS(Abstract)
class UEnvQueryItemType : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    uint16 ValueSize;  // 0x0028, protected

    // Virtual functions that start here:
    //   AddBlackboardFilters, GetDescription, StoreInBlackboard
};
