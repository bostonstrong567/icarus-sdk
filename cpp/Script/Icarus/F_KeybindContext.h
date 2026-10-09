// /Script/Icarus.KeybindContext
// size 0x40, declared in Icarus/Source/Icarus/DataStructs/KeybindData.h

USTRUCT()
struct FKeybindContext : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DisplayName;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FKeybindContextsRowHandle> SharedWithContexts;  // 0x0030, size 0x10
};
