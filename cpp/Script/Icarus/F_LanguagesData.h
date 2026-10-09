// /Script/Icarus.LanguagesData
// size 0x20, declared in Icarus/Source/Icarus/DataStructs/LanguagesData.h

USTRUCT()
struct FLanguagesData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bEnabled;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Coverage;  // 0x001C, size 0x4
};
