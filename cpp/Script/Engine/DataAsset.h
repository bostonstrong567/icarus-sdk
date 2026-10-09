// /Script/Engine.DataAsset
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/DataAsset.h

UCLASS(Abstract, MinimalAPI)
class UDataAsset : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY() TSubclassOf<UDataAsset> NativeClass;  // 0x0028, size 0x8
};
