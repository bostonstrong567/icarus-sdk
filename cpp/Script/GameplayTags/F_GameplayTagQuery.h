// /Script/GameplayTags.GameplayTagQuery
// size 0x48, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagContainer.h

USTRUCT()
struct FGameplayTagQuery
{
    UPROPERTY(EditAnywhere) int32 TokenStreamVersion;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere) TArray<FGameplayTag> TagDictionary;  // 0x0008, size 0x10
    UPROPERTY(EditAnywhere) TArray<uint8> QueryTokenStream;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere) FString UserDescription;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) FString AutoDescription;  // 0x0038, size 0x10
};
