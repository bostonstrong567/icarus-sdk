// /Script/Engine.BlueprintCore
// Derives from: UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Engine/BlueprintCore.h

UCLASS()
class UBlueprintCore : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(Transient) TSubclassOf<UObject> SkeletonGeneratedClass;  // 0x0028, size 0x8
    UPROPERTY() TSubclassOf<UObject> GeneratedClass;  // 0x0030, size 0x8
    UPROPERTY() bool bLegacyNeedToPurgeSkelRefs;  // 0x0038, size 0x1
private:
    UPROPERTY() FGuid BlueprintGuid;  // 0x003C, size 0x10
};
