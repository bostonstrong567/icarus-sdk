// /Script/Slate.InputChord
// size 0x20, declared in Engine/Source/Runtime/Slate/Public/Framework/Commands/InputChord.h

USTRUCT()
struct FInputChord
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FKey Key;  // 0x0000, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bShift : 1;  // 0x0018, mask 0x01
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCtrl : 1;  // 0x0018, mask 0x02
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bAlt : 1;  // 0x0018, mask 0x04
    UPROPERTY(EditAnywhere, BlueprintReadWrite) uint8 bCmd : 1;  // 0x0018, mask 0x08
};
