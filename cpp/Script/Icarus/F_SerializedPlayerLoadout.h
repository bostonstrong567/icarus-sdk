// /Script/Icarus.SerializedPlayerLoadout
// size 0x10, declared in Icarus/Source/Icarus/Cheats/IcarusCheatsFunctionLibrary.h

USTRUCT()
struct FSerializedPlayerLoadout
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FItemData> SerializedItemData;  // 0x0000, size 0x10
};
