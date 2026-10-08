// /Script/Icarus.IcarusPlayerPersona
// size 0x30, declared in Icarus/Source/Icarus/Subsystems/Online/RequestFriendInfo.h

USTRUCT()
struct FIcarusPlayerPersona
{
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString PlayerId;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FText Name;  // 0x0010, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UTexture2D* Avatar;  // 0x0028, size 0x8
};
