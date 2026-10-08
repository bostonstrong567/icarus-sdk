// /Script/Slate.CustomizedToolMenu
// size 0x1E8, declared in Engine/Source/Runtime/Slate/Public/Framework/MultiBox/ToolMenuBase.h

USTRUCT()
struct FCustomizedToolMenu
{
    UPROPERTY() FName Name;  // 0x0000, size 0x8
    UPROPERTY() TMap<FName, FCustomizedToolMenuEntry> Entries;  // 0x0008, size 0x50
    UPROPERTY() TMap<FName, FCustomizedToolMenuSection> Sections;  // 0x0058, size 0x50
    UPROPERTY() TMap<FName, FCustomizedToolMenuNameArray> EntryOrder;  // 0x00A8, size 0x50
    UPROPERTY() TArray<FName> SectionOrder;  // 0x00F8, size 0x10

    // Not reflected:
    FBlacklistNames BlacklistFilter;  // 0x0108
};
