// /Script/Engine.EdGraphSchemaAction
// size 0x100, declared in Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraphSchema.h

USTRUCT()
struct FEdGraphSchemaAction
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() int32 Grouping;  // 0x0068, size 0x4
    UPROPERTY() int32 SectionID;  // 0x006C, size 0x4
    UPROPERTY() TArray<FString> MenuDescriptionArray;  // 0x0070, size 0x10
    UPROPERTY() TArray<FString> FullSearchTitlesArray;  // 0x0080, size 0x10
    UPROPERTY() TArray<FString> FullSearchKeywordsArray;  // 0x0090, size 0x10
    UPROPERTY() TArray<FString> FullSearchCategoryArray;  // 0x00A0, size 0x10
    UPROPERTY() TArray<FString> LocalizedMenuDescriptionArray;  // 0x00B0, size 0x10
    UPROPERTY() TArray<FString> LocalizedFullSearchTitlesArray;  // 0x00C0, size 0x10
    UPROPERTY() TArray<FString> LocalizedFullSearchKeywordsArray;  // 0x00D0, size 0x10
    UPROPERTY() TArray<FString> LocalizedFullSearchCategoryArray;  // 0x00E0, size 0x10
    UPROPERTY() FString SearchText;  // 0x00F0, size 0x10
private:
    UPROPERTY() FText MenuDescription;  // 0x0008, size 0x18
    UPROPERTY() FText TooltipDescription;  // 0x0020, size 0x18
    UPROPERTY() FText Category;  // 0x0038, size 0x18
    UPROPERTY() FText Keywords;  // 0x0050, size 0x18
};
