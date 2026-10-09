// /Script/BuildPatchServices.CustomFieldData
// size 0x20, declared in Engine/Source/Runtime/Online/BuildPatchServices/Private/Data/ManifestUObject.h

USTRUCT()
struct FCustomFieldData
{
public:
    UPROPERTY() FString Key;  // 0x0000, size 0x10
    UPROPERTY() FString Value;  // 0x0010, size 0x10
};
