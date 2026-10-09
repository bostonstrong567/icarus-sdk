// /Script/Engine.ComponentOverrideRecord
// size 0x78, declared in Engine/Source/Runtime/Engine/Classes/Engine/InheritableComponentHandler.h

USTRUCT()
struct FComponentOverrideRecord
{
public:
    UPROPERTY() TSubclassOf<UObject> ComponentClass;  // 0x0000, size 0x8
    UPROPERTY(Instanced) UActorComponent* ComponentTemplate;  // 0x0008, size 0x8
    UPROPERTY() FComponentKey ComponentKey;  // 0x0010, size 0x20
    UPROPERTY() FBlueprintCookedComponentInstancingData CookedComponentInstancingData;  // 0x0030, size 0x48
};
