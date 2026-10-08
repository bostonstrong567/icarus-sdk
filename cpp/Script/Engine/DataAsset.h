// /Script/Engine.DataAsset
// Derives from: UObject
// size 0x30, declared in Engine/Source/Runtime/Engine/Classes/Engine/DataAsset.h

UCLASS(Abstract, MinimalAPI)
class UDataAsset : public UObject
{
public:
    UPROPERTY() TSubclassOf<UDataAsset> NativeClass;  // 0x0028, size 0x8
};
