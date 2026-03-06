class AICopManager {
public:
	auto SpawnPatrolCar() { auto f = (bool(__thiscall*)(AICopManager*))0x430D90; return f(this); }
	auto SpawnPursuitCar(IPursuit* a1) { auto f = (bool(__thiscall*)(AICopManager*, IPursuit*))0x42EA90; return f(this, a1); }
	auto SpawnCopCarNow(IPursuit* a1) { auto f = (bool(__thiscall*)(AICopManager*, IPursuit*))0x426960; return f(this, a1); }
	auto GetAvailableCopVehicleByClass(UCrc32 a1, bool a2) { auto f = (IVehicle*(__thiscall*)(AICopManager*, UCrc32, bool))0x426610; return f(this, a1, a2); }
	auto SpawnVehicleBehindTarget(IPursuit* a1, IVehicle* a2) { auto f = (void(__thiscall*)(AICopManager*, IPursuit*, IVehicle*))0x426850; return f(this, a1, a2); }
};
auto& TheOneCopManager = *(AICopManager**)0x90D5F4;