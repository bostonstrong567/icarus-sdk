// /Script/Icarus.IcarusPlayerCharacterSpace
// Derives from: AIcarusPlayerCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xBA0, declared in Icarus/Source/Icarus/Characters/IcarusPlayerCharacterSpace.h

UCLASS(Config=Game)
class AIcarusPlayerCharacterSpace : public AIcarusPlayerCharacter
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* MainInventory;  // 0x0B90, size 0x8
};
