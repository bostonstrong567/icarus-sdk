// /Script/JsonUtilities.JsonObjectWrapper
// size 0x20, declared in Engine/Source/Runtime/JsonUtilities/Public/JsonObjectWrapper.h

USTRUCT()
struct FJsonObjectWrapper
{
public:
    UPROPERTY(EditAnywhere) FString JsonString;  // 0x0000, size 0x10
    TSharedPtr<FJsonObject,0> JsonObject;  // 0x0010, not reflected
};
