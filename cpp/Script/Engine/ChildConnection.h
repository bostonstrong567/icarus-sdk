// /Script/Engine.ChildConnection
// Derives from: UNetConnection > UPlayer > UObject
// size 0x1BB0, declared in Engine/Source/Runtime/Engine/Classes/Engine/ChildConnection.h

UCLASS(Transient, MinimalAPI, Config=Engine)
class UChildConnection : public UNetConnection
{
public:
    UPROPERTY(Transient) UNetConnection* Parent;  // 0x1BA8, size 0x8
};
