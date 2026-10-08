// /Script/Icarus.AuraActor
// size 0x10, declared in Icarus/Source/Icarus/Modifiers/ModifierStateData.h

USTRUCT()
struct FAuraActor
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Actor;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ModifierUID;  // 0x0008, size 0x4
};
