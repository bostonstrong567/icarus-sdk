// /Script/Engine.UserDefinedEnum
// Derives from: UEnum > UField > UObject
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Engine/UserDefinedEnum.h

UCLASS()
class UUserDefinedEnum : public UEnum
{
public:
    UPROPERTY() TMap<FName, FText> DisplayNameMap;  // 0x0060, size 0x50
};
