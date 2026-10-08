// /Script/UObjectPlugin.MyPluginObject
// Derives from: UObject
// size 0x38, declared in Engine/Plugins/Developer/UObjectPlugin/Source/UObjectPlugin/Classes/MyPluginObject.h

UCLASS()
class UMyPluginObject : public UObject
{
public:
    UPROPERTY() FMyPluginStruct MyStruct;  // 0x0028, size 0x10
};
