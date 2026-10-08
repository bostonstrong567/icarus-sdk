// /Script/PacketHandler.PacketHandlerProfileConfig
// Derives from: UObject
// size 0x38, declared in Engine/Source/Runtime/PacketHandlers/PacketHandler/Classes/PacketHandlerProfileConfig.h

UCLASS(Config=Engine)
class UPacketHandlerProfileConfig : public UObject
{
public:
    UPROPERTY(Config) TArray<FString> Components;  // 0x0028, size 0x10
};
