// /Script/Icarus.AuraFlags
// size 0x4, declared in Icarus/Source/Icarus/Modifiers/ModifierStateData.h

USTRUCT()
struct FAuraFlags
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EffectsSelf;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EffectsPlayers;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EffectsNPCs;  // 0x0002, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool EffectsDeployables;  // 0x0003, size 0x1
};
